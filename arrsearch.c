//SEARCH
#include<stdio.h>
int main(){
	int arr[100],n,i,ch,count =0;
	printf("Enter number of elements-");
	scanf("%d",&n);
	printf("Enter elements-");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter element you want to search-");
	scanf("%d",&ch);
	for(i=0;i<n;i++){
		if(arr[i]==ch){
			//printf("ELEMENT FOUND!!!");
			count+=1;
		}
	}
	if(count>0){
		printf("Element found %d times",count);
		printf("\nELEMENT FOUND!!");
	}
	else{
		printf("Not found!!");
	}
	return 0;
}
