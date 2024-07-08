#include<stdio.h>
void traverse(int* ,int);
int main(){
	int arr[10],n,i;
	printf("Enter number of elements-");
	scanf("%d",&n);
	printf("Enter elements-");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	traverse(arr,n);
	return 0;
}

void traverse(int* a,int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d,",*(a+i))	;	
	}
	return ;
}
