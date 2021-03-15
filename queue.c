#include <stdio.h>
#define maxsize 5
int A[maxsize];
int front=-1,rear=-1;//front=top2,rear=top1;

void Enqueue(int x){
 if(rear == maxsize-1)
    {
        printf("\nOVERFLOW\n");
        return;
    }
    if(front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
    }  else{
  A[++rear]=x;
}

}

void dequeue(){

    if (front == -1 || front > rear)
    {
        printf("\nUNDERFLOW\n");
        return;

    }
    else  if(front == rear)
        {
            front = -1;
            rear = -1 ;
        }else{
    front= front+1;
        }

}

void print(){
int i;
 printf("queue: ");
 for(i=front;i<=rear;i++)
    printf("%d ",A[i]);

 printf("\n");
}
int main()
{

    Enqueue(2);
    Enqueue(5);
    Enqueue(6);
     Enqueue(8);
    dequeue();
    dequeue();
    print();
}
