# QUEUES
## AIM: To write a program for following queue operations:
      (a) Enqueue
      (b) Dequeue
      (c) Display 
      (d) Exit
      
## ALGORITHM:
PART 1: Main file
1) Start
2) Give user the menu of above mentioned operations in following way:
   1. Enqueue
   2. Dequeue
   3. Display
   4. Exit
3) Take the integer choice input from user and pass it on to 'switch' and call the functions 'enqueue', 'dequeue', 'display' and 'exit' for in the respective cases
PART 2: Function file:
1) Define  global variable 'MAX'=10, front=-1, rear=-1.
2) define enqueue function:
     if(rear==MAX-1) => queue is full
     else{
		rear++;
		queue[rear]=a;
   	if(front==-1)
    front=0;}
3) define dequeue function:
        	y=queue[front];
	        front++;
          return y;
4) define display function:
     	for(j=front;j<=rear;j++){
		printf("%d",queue[j]);
	}
 5) for exiting from loop=> exit(0) in respective switch case.
 6) Stop.
 
 ## Description:
 Queues: queues can be considered as a line in front of ATM. Just like ATM line the elements are added or removed in First in First out order(FIFO). We used this simple concept to write the above program.
