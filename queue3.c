#include<stdio.h>
#include<stdlib.h>
#define max 5

void enqueue(int,int *,int *);
void dequeue(int*,int*);
void display(int*,int*);
void peek(int*,int *);


int queue[max];


void enqueue(int item,int *f,int *r)
{
	if (*r==max-1)
	{
		printf("OVERFLOW!!!");
	}
	else if(*r==-1 && *f==-1)
	{
		*r=0;
		*f=0;
		queue[*r]=item;
	}
	else
	{
		(*r)++;
		queue[*r]=item;
	}
}


void dequeue(int * f ,int *r)
{
	if(*r==-1 && *f==-1)
	{
		printf("UNDERFLOW!!!");
	}
	else if(*r==*f)
	{
		printf("Deleted item is= %d",queue[*f]);
	    *f=-1;
		*r=-1;
	}
	else
	{
		printf("Deleted item is= %d",queue[*f]);
		(*r)++;
	}
}


void display(int * f,int * r)
{
	int i;
	if(*f ==-1 && *r==-1)
	{
		printf("QUEUE IS EMPTY");
	}
	else
	{
		printf("Elements in queue=");
		for(i=0;i<=(*r);i++)
		{
			printf("%d ",queue[i]);
		}
	}
}


void peek(int *f ,int * r)
{
	if(*r==-1 && *f==-1)
	{
		printf("QUEUE IS EMPTY!!!");
	}
	else
	{
		printf("Top element is= %d",queue[*f]);
	}
}


int main()
{
    int front =-1;
    int rear=-1;
	int item,choice;
	while(1)
	{
		printf("\nENQUEUE-1");
		printf("\nDEQUEUE-2");
		printf("\nDISPLAY-3");
		printf("\nPEEK-4");
		printf("\nEXIT-5");
		printf("\nENTER CHOICE=");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter item=");
				scanf("%d",&item);
				enqueue(item,&front,&rear);
				break;
			case 2:
			    dequeue(&front,&rear);
				break;
			case 3:
				display(&front,&rear);
				break;
			case 4:
				peek(&front ,&rear);
				break;
			case 5:
				exit(0);
				break;
			default:
				printf("INVALID CHOICE...");	
		}
	}
	return 0;
}
