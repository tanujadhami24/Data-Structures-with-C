#include<stdio.h>
#define max 5
int queue[max];
void peek(){
	if(front==-1 && rear==-1){
		printf("UNDERFLOw!!!");
	}
	else{
		printf("%d",queue[front]);
	}
}

void enqueue(int val, int *front ,int *rear){
	if(*rear==max-1){
		printf("Queue is full!!!");
		}
	else if (*rear==-1 && *front==-1){
		*rear=0;
		*front=0;
		queue[*rear]=val;
	}
	else{
		*rear=*rear+1;
		queue[*rear]=val;
	}
}

void display( int *front ,int *rear){
	int i;
	if(*rear==-1 && *front==-1){
		printf("Queue is empty!!!");
	}
	else{
		for(i=*front;i<=*rear;i++){
			printf("%d ",queue[i]);
		}
	}
}

void dequeue( int *front ,int *rear){
	int temp;
	if(*rear==-1 && *front==-1){
		printf("Queue is empty!!!");
	}
	else if (*rear==*front){
		temp=queue[*rear];
		printf("deleted element is= %d", temp);
		*rear=-1;
		*front=-1;
	}
	else{
		temp=queue[*rear];
		printf("deleted element is= %d", temp);
		*rear=*rear-1;
	}
}


int main(){
	int ch, val;
	int rear=-1;
	int front=-1;
	while(ch!=5){
		printf("\n1= insert \n2= display \n3= delete\n4=peek \n5=EXIT!!!!");
		printf("\n Enter choice=");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("Enter value=");
				scanf("%d", &val);
				enqueue(val,&front,&rear);
				break;
			case 2:
				display(&front,&rear);
				break;
			case 3:
				dequeue(&front,&rear);
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
