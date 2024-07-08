#include<stdio.h>
#include<stdlib.h>
 struct node{
 	int data;
 	struct node * next;
 };
 struct node *head=0;
 
 void make(int val){
 	struct node *newnode,*q;
 	newnode=(struct node*)malloc(sizeof(struct node));
 	newnode->data=val;
 	if(head==0){
 		newnode->next=head;
 		head=newnode;
	 }
	 else{
	 	q=head;
	 	while(q->next!=head){
	 		q=q->next;
		 }
		q->next=newnode;
		newnode->next=head;
	 }
	 return;
 }
 
 void display(){
 	struct node *q;
 	if(head==0){
 		printf("LL is empty!!!");
	 }
	 else{
	 	q=head;
	 	while(q->next!=head){
 		printf("%d ",q->data);
 		q=q->next;
	 }
	 printf("%d",q->data);
	 }
 
	 return;
 }
 
 void insertbeg(int val){
 	struct node *newnode, *q;
 	newnode=(struct node*)malloc(sizeof(struct node));
 	newnode->data=val;
 	if (head==0){
 		head=newnode;
 		newnode->next=head;
	 }
	 else{
	 	q=head;
	 	while(q->next!=head){
	 		q=q->next;
		 }
		 q->next=newnode;
		 newnode->next=head;
		 head=newnode;
	 }
 }
 
 void insertend(int val){
 	struct node *newnode, *q;
 	newnode=(struct node*)malloc(sizeof(struct node));
 	newnode->data=val;
 	if (head==0){
 		head=newnode;
 		newnode->next=head;
	 }
	else{
		q=head;
		while(q->next!=head){
			q=q->next;
		}
		q->next=newnode;
		newnode->next=head;
	}
	return;
 }
 
 int main(){
 	int ch,val;
 	while(ch!=10){
 		printf("\n10=BREAK.\n1= MAKE LINKED LIST.\n2=DISPLAY.\n3=INSERTION AT BEGINNING.\n4=INSERT AT END ");
 		printf("\nEnter choice=");
 		scanf("%d",&ch);
 		switch(ch){
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
 				insertbeg(val);
 				break;
 			case 4:
 				printf("Enter value=");
 				scanf("%d",&val);
 				insertend(val);
 				break;
 				
 			default:
 				printf("\nINVALID CHOICE!!!");
		 }
	 }
 }
