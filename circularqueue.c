#include<stdio.h>
#define max 5
int queue[max];
int front=-1;
int rear=-1;

void enqueue(int val){
	if ((rear+1)%max==max){
		printf("queue is full!!!");
	}
		else if(rear==-1 && front==-1){
			rear=rear+1;
			front=front+1;
			queue[rear]=val;
		}
		else{
			rear=(rear+1)%max;
			queue[rear]=val;
		}
}

void display(){
	if (rear==-1 && front==-1){
		printf("Queue is empty!!!");
	}
	else{
		while(front!=rear){
			printf("%d",queue[front]);
			front=(front+1)%max;
		}
		printf("%d",queue[front]);
	}
}

void peek(){
	if(front==-1 && rear==-1){
		printf("UNDERFLOw!!!");
	}
	else{
		printf("%d",queue[front]);
	}
}

void dequeue(){
	if(front==-1 && rear==-1){
		printf("empty!!!");
	}
	else if(front==rear){
		printf("deleted element is %d",queue[front]);
		front=-1;
		rear=-1;
	}
	else{
		printf("deleted element is %d",queue[front]);
		front=(front+1)%max;
		}
}



int main(){
	int ch, val;
	while(ch!=5){
		printf("\n1= insert \n2= display \n3= delete\n4=peek\n5=EXIT!!!!");
		printf("\n Enter choice=");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("Enter value=");
				scanf("%d", &val);
				enqueue(val);
				break;
			case 2:
				display();
				break;
			case 3:
				dequeue();
				break;
				case 4:
					peek();
					break;
			case 5:
				return 0;
			default:
				printf("Invalid choice!!!");
				break;
		}
	}
}
