#include<stdio.h>
int main(){
	int arr[100],n,i,val,pos;
	printf("Enter number of elements-");
	scanf("%d",&n);
	printf("Enter elements-");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter position-");
	scanf("%d",&pos);
	printf("Enter element-");
	scanf("%d",&val);
	for(i=n-1;i>=pos-1;i--){
		arr[i+1]=arr[i];
	}
	arr[pos-1]=val;
	n=n+1;
	for(i=0;i<n;i++){
		printf("%d,",arr[i]);
	}
	return 0;
}
