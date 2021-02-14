#include <stdio.h>

#define MAX 5

int queue[MAX];

int front = -1;
int rear = -1;

int IsEmpty()
{
	if(front == -1 && rear == -1)
		return 1;
	else
		return 0;
}
int IsFull()
{
	if(rear == MAX-1)
		return 1;
	else
		return 0;
}

void Enqueue(int num)
{
	if(IsFull())
	{
		printf("Full!\n");
	}
	else
	{
		if(front<0)
			front = 0;
		rear++;
		queue[rear] = num;
		printf("front: %d / rear: %d\n",front,rear);
	}
}
void Dequeue()
{
	if(IsEmpty())
	{
		printf("Empty!\n");
	}
	else
	{
		int temp = queue[front];
		front++;
		if(front > rear)
		{
			front=-1;
			rear=-1;
		}
		printf("Dequeue: %d\n",temp);
		printf("front: %d / rear: %d\n",front,rear);
 
	}
}

void draw()
{
	for(int i=front;i<=rear;i++)
	{
		printf("%d ",queue[i]);
	}
	printf("\n");
}

int main(void) 
{
    //Dequeue(); //empty check
    printf("------before------\n");
    Enqueue(10);
		Enqueue(30);
		Enqueue(99);
		Enqueue(4);
		Enqueue(777);
		draw();
		printf("-------after-------\n");
		Dequeue();
		draw();
		Dequeue();
		draw();

    return 0;
}
