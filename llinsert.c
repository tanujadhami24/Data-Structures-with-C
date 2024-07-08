#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;	
};

struct node *start=NULL;

//INSERT ELEMENTS IN LINKED LIST--
void insert(int val);
struct node *newnode,*q;
newnode= (struct node *)malloc(sizeof(struct node));
newnode->data=val;
newnode->next=;
if(start==NULL)
{
	start=newnode;
	temp=start;
}
else
{
	start->next=newnode;
	q=newnode;
}

int main()
{
	int ch,val;
	while (1)
	{
		printf("1=INSERT");
		printf("2=DISPLAY");
		printf("0=EXIT");
		printf("Enter choice=");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1:
				printf("Enter value=");
				scanf("%d",&val);
				insert(val);
				break;
			case 0:
				exit;
				break;
			default:
				printf("INVALID CHOICE!!!!!");
				break;
		}
	}
	return 0;
}
