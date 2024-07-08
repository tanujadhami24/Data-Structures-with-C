#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left, *right;
};

struct node *create(){
	int x;
	struct node * newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the value=(-1 for no value)");
	scanf("%d",&x);
	if(x==-1){
		return;
	}
	newnode->data=x;
	printf("\nEnter left child=");
	newnode->left=create();
	printf("\nEnter right child=");
	newnode->right=create();
	return newnode;
}


int main(){
	struct node *root=NULL;
	root=create();
	return 0;
}
