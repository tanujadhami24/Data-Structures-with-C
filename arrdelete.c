// DELETE A VALUE
#include<stdio.h>
int main(){
	int arr[100],n,i,val;
	printf("Enter number of elements-");
	scanf("%d",&n);
	printf("Enter elements-");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter element-");
	scanf("%d",&val);
	for(i=0;i<=n-1;i++){
		if(arr[i]==val){
			continue;
		}
		else{
			printf("%d ",arr[i]);
		}
	}
	return 0;
}
