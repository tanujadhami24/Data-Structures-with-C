#include<stdio.h> 
#include<stdlib.h>	
#define max 5 
void push(int * ,int,int);
void pop(int*,int);
void peek(int*,int);
void display(int*,int);


int main()
{
	int stack[max];
	int top=-1;
	int choice,item;
	while(1)
	{
		printf("PUSH=1");
		printf("\nPOP=2");
		printf("\nPEEK=3");
		printf("\nDISPLAY=4");
		printf("\nEXIT=5");
		printf("\nEnter choice-");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
				printf("Enter item to be inputed-");
				scanf("%d",item);
				push(stack,item,top);
				break;
			case 2:
				pop(stack,top);
				break;
			case 3:
				peek(stack,top);
				break;
			case 4:
				display(stack,top);
				break;
			case 5:
				exit(0);
			default:
				printf("ENTER VALID CHOICE!!!");
		}
		
	}
	return 0;	
}



void push(int *s,int item,int top)
{
	if(top==max-1)
	{
		printf("OVERFLOW!!!");
	}
	else
	{
		top++;
		*(s+top)=item;
	}
}



void pop(int *s,int top)
{
	if(top==-1)
	{
		printf("UNDERFLOW !!!");
	}
	else
	{
	    top--;	
	}	
}



void peek(int* s,int top)
{
	if(top!=-1 && top!=max-1)
	{
		printf("%d",*(s+top));
	}
	else
	{
		printf("STACK IS FULL /EMPTY");
	}
}



void display(int * s,int top)
{
	int i;
	for( i=0;i<=top;i++)
	{
		printf("%d",*(s+i))	;
	}
}


