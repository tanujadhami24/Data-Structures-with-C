//IMPLEMENTATION OF QUEUE USING ARRAY
#include<stdio.h>
#define max 5

void enqueue(int);
void dequeue();
void display();
void peek()


int queue[max];
int front= -1;
int rear =-1;


void enqueue(int item)
{
	if (rear==max-1)
	{
		printf("OVERFLOW!!!");
	}
	else if(rear==-1 && front==-1)
	{
		rear=0;
		front=0;
		queue[rear]=item;
	}
	else
	{
		rear++;
		queue[rear]=item;
	}
}


void dequeue()
{
	if(rear==-1 && front ==-1)
	{
		printf("UNDERFLOW!!!");
	}
	else if(rear==front)
	{
		printf("Deleted item is= %d",queue[front]);
		front=-1;
		rear=-1;
	}
	else
	{
		printf("Deleted item is= %d",queue[front]);
		rear++;
	}
}


void display()
{
	int i;
	if(front ==-1 && rear==-1)
	{
		printf("QUEUE IS EMPTY");
	}
	else
	{
		printf("Elements in queue=");
		for(i=0;i<=rear;i++)
		{
			printf("%d ",queue[i]);
		}
	}
}


void peek()
{
	if(rear==-1 && front==-1)
	{
		printf("QUEUE IS EMPTY!!!");
	}
	else
	{
		printf("Top element is= %d",queue[front]);
	}
}


int main()
{
	int item,choice;
	while(1)
	{
		printf("ENQUEUE-1\n");
		printf("DEQUEUE-2\n");
		printf("DISPLAY-1\n");
		printf("PEEK-1\n");
		printf("ENTER CHOICE=");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter item=");
				scanf("%d",&item);
				enqueue(item);
				break;
			case 2:
			    dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				peek();
				break;
			case 5:
				exit(0);
			default:
				printf("INVALID CHOICE...");	
		}
	}
	return 0;
}







