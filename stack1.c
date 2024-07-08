#include<stdio.h>
#define max 5
int stack[max];

void push(int val,int * t){
	if (*t==max-1){
		printf("\nOVERFLOW!!!!");
	}
	else{
		*t=*t+1;
		stack[*t]=val;
	}
} 

void pop(int *t){
	int temp;
	if(*t==-1){
		printf("\nUNDERFLOW!!!!");
	}
	else{
		temp=stack[*t];
		printf("\nPopped element is %d",temp);
		*t=*t-1;
		
	}
}

void peek(int*t){
	if (*t==-1){
		printf("\nStack is empty!!!");
	}
	else{
		printf("%d is the top element",stack[*t]);
	}
}

void display(int *t){
	int i;
	if (*t==-1){
		printf("\nStack is empty!!!");
	}
	else{
		for( i=0;i<=*t;i++){
			printf("%d ",stack[i]);
		}
	}
}


int main(){
	int top=-1;
	int ch,val;
	while (ch!=5){
		printf("\n1=PUSH \n2=POP \n3=PEEK \n4=DISPLAY");
		printf("\n Enter  choice=");
		scanf("%d",&ch);
		switch (ch){
			case 1:
				printf("\n Enter value=");
				scanf("%d",&val);
				push(val,&top);
				break;
			case 2:
				pop(&top);
				break;
			case 3:
				peek(&top);
				break;
			case 4:
				display(&top);
				break;
			case 5:
				return 0;
			default:
				printf("INVALID CHOICE!!!!");
				break;				
		}
	}
}
