#include <stdio.h>
#include <stdlib.h>

main(){
	int i,n,m,x;
	while(1>0){
		printf("press following numbers for respective queue operations:\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
		scanf("%d",&n);
		switch(n){
			case 1: printf("enter element to enqueue:");
			scanf("%d",&m);
			enqueue(m);
			break;
			case 2: printf("process of dequeue:");
			x=dequeue();
			printf("the dequeued element=%d",x);
			break;
			case 3: printf("displaying queue:");
			display();
			break;
			case 4: exit(0);
			break;
			default: printf("invalid input");
			break;
		}
	}
}
