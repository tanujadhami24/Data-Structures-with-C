#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *prev, *next;
};
struct node *head= NULL;

void ascending(int val){
	struct node *q1=NULL,*q2,*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	newnode->prev=NULL;
	newnode->next=NULL;	
	if(head==NULL){
		head=newnode;
	}
	if(newnode->data<head->data){
		newnode->next=head;
		head->prev=newnode;
		head=newnode;
	}
	else{
		q2=head;
		if(q2->data<newnode->data){
			q1=q2;
			q2=q2->next;
		}
		newnode->next=q2->prev;
		newnode->prev=q1->next;
		q2->prev=newnode;
		q1->next=newnode;	
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
int main(){
	int val,i,n;
	printf("Enter total elements=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter value");
		scanf("%d",&val);
		ascending(val);
	}
	display();
	return 0;
	
}
