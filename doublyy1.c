#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next,*prev;
};
struct node * head= 0;

void make(int val){
	struct node  *newnode=(struct node*)malloc(sizeof(struct node));
	struct node  *q;
	newnode->data=val;
	newnode->prev=NULL;
	newnode->next=NULL;
	if(head==NULL){
		head=newnode;
	}
	else{
		q=head;
		while(q->next!=NULL){
			q=q->next;
		}
		q->next=newnode;
		newnode->prev=q;
	}
}

void display(){
	struct node *q1;
	q1=head;
	while(q1!=NULL){
		printf("%d ",q1->data);
		q1=q1->next;
	}
}

void insertatbeg(int val){
	struct node  *newnode=(struct node*)malloc(sizeof(struct node));
	struct node  *q;
	newnode->data=val;
	newnode->prev=NULL;
	newnode->next=NULL;
	if(head==NULL){
		head=newnode;
	}
	else{
		newnode->next=head;
		head->prev=newnode;
		head=newnode;
	}
}


void insertatend(int val){
	struct node  *newnode=(struct node*)malloc(sizeof(struct node));
	struct node  *q;
	newnode->data=val;
	newnode->prev=NULL;
	newnode->next=NULL;
	if(head==NULL){
		head=newnode;
	}
	else{
		q=head;
		while(q->next!=NULL){
			q=q->next;
		}
		q->next=newnode;
		newnode->prev=q;
	}
}

void deleteatbeg(){
	struct node *q;
	q=head;
	head=head->next;
	head->prev=NULL;
	free(q);
}

void deleteatend(){
	struct node *q1,*q2;
	q2=head;
	while(q2->next!=NULL){
		q1=q2;
		q2=q2->next;
	}
	free(q2);
	q1->next=NULL;
	
}

void insertatpos(int pos,int val){
	struct node  *newnode=(struct node*)malloc(sizeof(struct node));
	int i=1;
	struct node  *q1,*q2;
	newnode->data=val;
	newnode->prev=NULL;
	newnode->next=NULL;
	q2=head;
	while(i<pos){
		q1=q2;
		q2=q2->next;
		i++;
	}
	newnode->next=q2;
	q2->prev=newnode;
	q1->next=newnode;
	newnode->prev=q1;
}

void deleteatpos(int pos){
	struct node *q1,*q2,*temp;
	q2=head;
	int i=1;
	while(i<pos){
		q1=q2;
		q2=q2->next;
		i++;
	}
	temp=q2->next;
	q1->next=temp;
	temp->prev=q1;
	free(q2);
}

struct node *reverse(){
	struct node*q,*temp;
	q=head;
	while(q->next!=NULL){
		q=q->next;
	}
	head=q;
	q->next=q->prev;
	q->prev=NULL;
	q=q->next;
	while(q->prev!=NULL){
		temp=q->prev;
		q->prev=q->next;
		q->next=temp;
		q=q->next;
	}
	q->prev=q->next;
	q->next=NULL;
	return head;	
}

int main()
{
int ch=0,val,pos;
while (ch!=10)
{
	printf("\n1= Make a LL:\n2= Display:\n3= Insert at beg.:\n4= Insert at end: \n5= Intert at Position:\n6= Delete at beg.:\n7= Delete at end: \n8= Delete at Position:\n9=Reverse:\n10= EXIT...");
	printf("Enetr choice=");
	scanf("%d",&ch);
	switch (ch)
	{
		case 1:
			printf("Enter value=");
			scanf("%d",&val);
			make(val);
			break;
		case 2:
			display();
			break;
		case 3:
			printf("Enter value=");
			scanf("%d",&val);
			insertatbeg(val);
			break;
		case 4:
			printf("Enter value=");
			scanf("%d",&val);
			insertatend(val);
			break;
		case 5:
			printf("Enter position=");
			scanf("%d",&pos);
			printf("\nEnter value=");
			scanf("%d",&val);
			insertatpos(pos,val);
			break;
		case 6:
			deleteatbeg();
			break;
		case 7:
			deleteatend();
			break;
		case 8:
			printf("Enter position=");
			scanf("%d",&pos);
			deleteatpos(pos);
			break;
		case 9:
			head=reverse();
			break;
		case 10:
			return 0;
		default:
			printf("Invalid choice!!!");
			break;			
	}}}

