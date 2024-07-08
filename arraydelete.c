#include<stdio.h>
int delete(int*,int*,int);
int main(){
	int arr[10],n,i,pos,len;
	printf("enetr number of elements-");
	scanf("%d",&n);
	printf("Enter elements-");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter position of element to be deleted-");
	scanf("%d",&pos);
	len=delete(arr,&n,pos);
	printf("New length is-%d",len);
	printf("New  array -");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}

int delete(int* a,int*n,int pos){
	int i;
	for(i=pos-1;i<*(n);i++){
		*(a+i)=*(a+i+1);
	}
	*n=*n-1;
	return n;
}
