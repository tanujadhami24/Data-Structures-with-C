#include<stdio.h>
int main()
{
int array[10]={5,3,2,1,7,6,4};
int *ptr, *ptr1, *ptr2;
ptr = array;
ptr1=&array[4];
ptr2=&array[6];
ptr = ptr1-ptr2;
printf("%d",*(ptr));
return 0;
}

