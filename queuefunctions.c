#include <stdio.h>
#include <stdlib.h>

#define MAX 10
int queue[MAX], front=-1, rear=-1;

enqueue(int a){
	if(rear==MAX-1){
		printf("queue full");
	}
	else{
		rear++;
		queue[rear]=a;
		if(front==-1){
			front=0;
		}
	}
}

int dequeue(){
	int y;
	y=queue[front];
	front++;
	return y;
}

display(){
	int j;
	for(j=front;j<=rear;j++){
		printf("%d",queue[j]);
	}
}

