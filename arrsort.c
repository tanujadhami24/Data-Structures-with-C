#include<stdio.h>
int main(){
	int arr[100],n,i,j,temp;
	printf("Enter number of elements-");
	scanf("%d",&n);
	printf("Enter elements-");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=n-1;i++){
		for(j=0;j<=n-2-i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("Elements of array are-");
	for(i=0;i<n;i++){
		printf("%d,",arr[i]);
	}
	return 0;
}
