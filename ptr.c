#include<stdio.h>
int main()
{ 
int num = 5, *n; //3rd line
char ch = "A", *c; //4th line
float r = 4.5, *f; //5th line
n = &num; //6th line
c = &ch; //7th line
f = &r; //8th line
printf("num = %d\n", num); //9th line
printf("Address of num = %u\n", &num); //10th line
printf("num = %d\n\n", *n); //11th line
printf("ch = %c\n", ch); //12th line
printf("Address of ch = %u\n", &ch); //13th line
printf("ch = %d\n\n", *c); //14th line
printf("r = %f\n", r); //15th line
printf("Address of r = %u\n", &r); //16th line
printf("r = %f", *f); //17th line
return 0;
}

