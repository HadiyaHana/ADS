#include<stdio.h>
#define MAX_SIZE 5

int queue[MAX_SIZE];
int front=-1;
int rear=-1;
int n;

int isEmpty()
{
return (front==-1&&rear==-1);
}
int isFull()
{
return ((front==rear+1));
}

void enqueue(n)
{
if (isFull())
{
printf ("queue is full cannot enqueue\n");
return;
}
if (isEmpty())
{
(front=rear=0);
}else
{
rear=(rear+1)%MAX_SIZE;
}
queue[rear]=n;
printf ("%d enqueued to the queue\n",n);
}

void dequeue()
{
if (isEmpty())
{
printf ("queue is Empty cannot denqueue\n");
return;
}
int dequeue=queue[front];
if (front=rear)
{
front=rear=-1;
}else
{
front=(front+1)%MAX_SIZE;
}
printf ("%d denqueued to the queue\n",n);
}

int search(n)
{
if (isEmpty())
{
printf ("queue is Empty\n");
return -1;
}
int i=front;
int p=1;
while (i!=rear)
{
if (queue[i]==n)
{
printf ("item found at position %d\n",p);
return p;
}
i=(i+1)%MAX_SIZE;
p++;
}
if (queue[i]==n)
{
printf ("item found at position %d\n",p);
return p;
}
printf("item not found at position %d\n",p);
}

void display()
{
if (isEmpty())
{
printf ("queue is Empty\n");
}else
{
int i=front;
printf ("queue: \n");
if (front<=rear)
{
while(i<=rear)
{
printf ("%d\n",queue[i]);
i++;
}
}else
{
while (i<=rear)
{
printf ("%d\n",queue[i]);
i++;
}
}
printf("\n");
}
}

int main()
{
int ch,n;

do
{
printf ("\n1.enqueue.\n");
printf ("2.dequeue.\n");
printf ("3.search.\n");
printf ("4.display.\n");
printf ("5.exit.\n");

printf ("enter your choice");
scanf("%d",&ch);

switch(ch)
{
case 1:
printf("enter the values to be entered:");
scanf("%d",&n);
enqueue(n);
break;

case 2:
dequeue();
break;

case 3:
printf("enter the elements you want to search");
scanf("%d",&n);
search(n);
break;

case 4:
display();
break;

case 5:
printf ("Exiting...");
break;

default:
printf("invalid choice!");
}
}while(ch!=5);
return 0;
}
