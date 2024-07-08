#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};
struct node * head= 0;

void make(int val){
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	struct node *q;
	newnode->data=val;
	newnode->next=NULL;
	if (head==NULL){
		head=newnode;
	}
	else{
		q=head;
		while(q->next!=NULL){
			q=q->next;
		}
		q->next=newnode;
	}
}

void display(){
	struct node *q;
	q=head;
	while(q!=NULL){
		printf("%d ",q->data);
		q=q->next;
	}
}

void insertatbeg(int val){
	struct node  *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	newnode->next=NULL;
	if(head==NULL){
		head=newnode;
	}
	else{
		newnode->next=head;
		head=newnode;
	}
}

void insertatend(int val){
	struct node  *newnode=(struct node*)malloc(sizeof(struct node));
	struct node *q;
	newnode->data=val;
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
	}
}


void deleteatbeg(){
	struct node *temp;
	temp= head;
	head=head->next;
	free(temp);
}

void deleteatend(){
	struct node *q1,*q2;
	q2=head;
	while(q2->next!=NULL){
		q1=q2;
		q2=q2->next;
	}
	q1->next=NULL;
	free(q2);
}
void insertatpos(int pos,int val){
	int i=1;
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	struct node *q;
	newnode->data=val;
	newnode->next=NULL;
	q=head;
	while(i<pos){
		q=q->next;
		i++;
	}
	newnode->next=q->next;
	q->next=newnode;
}


void deleteatpos(int pos){
	struct node *q1,*q2;
	int i=1;
	q2=head;
	while(i<pos){
		q1=q2;
		q2=q2->next;
		i++;
	}
	q1->next=q2->next;
	free(q2);
}

struct node * reverse(){
	struct node *p, *n;
	while(head!=NULL){
		n=head->next;
		head->next=p;
		p=head;
		head=n;
	}
    head=p;
    return head;
}

int main(){
int ch=0,val,pos;
while (ch!=10){
	printf("\n1= Make a LL:\n2= Display:\n3= Insert at beg.:\n4= Insert at end: \n5= Intert at Position:\n6= Delete at beg.:\n7= Delete at end: \n8= Delete at Position:\n9=Reverse\n10= EXIT...");
	printf("Enetr choice=");
	scanf("%d",&ch);
	switch (ch){
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
	}
}

}

