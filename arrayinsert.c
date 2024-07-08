#include<stdio.h>
int insert(int*,int*,int ,int);
int main(){
	int arr[10],n,i,ind,val,len;
	printf("Enter number of elements-");
	scanf("%d",&n);
	printf("Enter elements-");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter index at which value is inserted-");
	scanf("%d",&ind);
	printf("Enter value -");
	scanf("%d",&val);
	insert(arr,&n,ind,val);
	len=printf("Length of modified arry is-%d",n);
	printf("Modified array-");
	for(i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
}

int insert(int* a,int* n, int ind,int val){
	int i;
	for(i=(*n)-1;i>=ind;i--){
		*(a+i+1)=*(a+i);		
	}
	a[ind]=val;
	(*n)++;
	return n;
}
