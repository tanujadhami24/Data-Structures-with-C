#include<stdio.h>
int main(){
	int a[100],b[100],c[100],n,m,i=0,j=0,k=0;
	printf("enter number of elements in array 1-");
	scanf("%d",&m);
	printf("Enter elements=");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter number of elements in array 2-");
	scanf("%d",&n);
	printf("Enter elements=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	while(i<=m-1 && j<=n-1)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			k++;
			i++;
		}
		if(a[i]>b[j])
		{
			c[k]=b[j];
			k++;
			j++;
		}
		if(a[i]==b[j])
		{
			c[k]=a[i];
			k++;
			i++;
			c[k]=b[j];
			k++;
			j++;
		}
	}
		if(i==m)
	{
		while(j<n)	
		{
			c[k]=b[j];
			k++;
			j++;
		}
	}
	if(j==n)
	{
		while(i<m)
		{
			c[k]==a[i];
			k++;
			i++;
		}
	}
	printf("new array=");
	for(k=0;k<=n+m-1;k++){
		printf("%d ",c[k]);
	}
	return 0;
}
			
	
