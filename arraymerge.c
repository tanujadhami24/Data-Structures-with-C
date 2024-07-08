#include<stdio.h>
void merge(int*,int*,int*,int,int);
int main(){
	int arr1[10],arr2[10],arr3[10],i,j,k,m,n;
	printf("Enter number of elements in array 1-");
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&arr1[i]);
	}
	printf("Enter number of elements in array 2-");
	scanf("%d",&n);
	for(j=0;j<n;j++){
		scanf("%d",&arr2[j]);
	}
	merge(arr1,arr2,arr3,m,n);
	printf("merged array-");
	for(k=0;k<m+n;k++){
		printf("%d ,",arr3[k]);
	}
	return 0;
}

void merge(int* a,int* b,int* c,int m,int n){
	int k,i,j;
	while((i<m)&&(j<n)){
		if(*(a+i)<*(b+j)){
			*(c+k)=*(a+i);
			k++;
			i++;
		}
		if(*(a+i)>*(b+j)){
			*(c+k)=*(b+j);
			k++;
			j++;
		}
		if(*(a+i)=*(b+j)){
			*(c+k)=*(a+i);
			k++;
			i++;
			*(c+k)=*(b+j);
			k++;
			j++;
		}	
	}
	if(i==m){
		while(j<n){
			*(c+k)=*(b+j);
			k++;
			j++;
		}
		if(j==n){
		while(i<m){
			*(c+k)=*(a+i);
			k++;
			i++;
		}
		
	}

}
return ;
}

