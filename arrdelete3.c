#include<stdio.h>
int main(){
	int arr[100],n,i,pos;
	printf("Enter number of elements-");
	scanf("%d",&n);
	printf("Enter elements-");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter position-");
	scanf("%d",&pos);
	for(i=pos-1;i<=n-1;i++){
		arr[i]=arr[i+1];
	}
	n=n-1;
	printf("New array");
	for(i=0;i<=n-1;i++){
		printf("%d ,",arr[i]);
	}
	return 0;
}
