#include<stdio.h>
/*int main()
{
 int a[2][3][4] = { {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 1, 2},
 {2, 1, 4, 7, 6, 7, 8, 9, 0, 0, 0, 0} };
 printf("%u, %u, %u, %d\n", a, *a, **a, ***a);
 return 0;
}*/
power(int**);
int main()
{
 int a=5, *ptr; /* Address of 'a' is 100 */
 ptr = &a;
 a = power(&ptr);
 printf("%d\n", a);
 return 0;
}
power(int **ptr) {
 int p;
 p = **ptr***ptr;
 return (p); }
