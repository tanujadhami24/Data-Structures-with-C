#include<stdio.h>
power(int**);
int main()
{
int a=5, *ptr; /* Address of 'a' is 100 */
ptr = &a;
a = power(&ptr);
printf("%d\n", a);
return 0;
}
power(int **ptr)
{
int p;
p = **ptr***ptr;
return (p);
}
