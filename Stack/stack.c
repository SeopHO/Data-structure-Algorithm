#include <stdio.h>

#define MAX 5

int stack[MAX];
int top;
 
void createEmptyStack()
{
  top = -1;
}

int IsEmpty()
{
  if(top == -1)
    return 1;
  else
    return 0;
}

int IsFull()
{
  if(top >= MAX-1)
    return 1;
  else
    return 0;
}

void push(int num)
{
  if(IsFull())
    printf("Stack is Full!!");
  else
  {
    top++;
    stack[top] = num;
  }
}

int pop()
{
  if(IsEmpty())
  {
    printf("Stack is Empty!!");
  }
  else
  {
      int temp = stack[top];
      top--;
      return temp;
      
  }
    
}

void showStack()
{
  for(int i=0;i<=top;i++)
  {
    printf("%d ",stack[i]);
  }
  printf("\n");
}

int main()
{
    createEmptyStack();
    push(10);
    push(15);
    push(5);
    push(100);
    push(2000);
    printf("pop: %d\n",pop());
    showStack();
    return 0;
}
