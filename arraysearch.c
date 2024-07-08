#include<stdio.h>
int search(int*,int ,int);
int main(){
	int arr[10],n,i,val,f;
	printf("Enter number of elements-");
	scanf("%d",&n);
	printf("Enter elements-");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter value -");
	scanf("%d",&val);
	f=search(arr,n,val);
	if(f==0){
		printf("Value not found");
	}
	else{
		printf("Value found at index-%d",f);
	}
	return 0;
}

int search(int* a,int n ,int val){
	int i,found=0;
	for(i=0;i<n;i++){
		if(*(a+i)==val){
			found++;
			break;
		}		
	}
	if(found==1){
		return i;
	}
	return 0;
}
