#include<stdio.h>>
#define MAX_SIZE 101
int A[MAX_SIZE];
int top=-1;
void push(int x){
if (top == MAX_SIZE-1){
    printf("Overflow\n");
    return;
}else
A[++top]=x;
}
void pop(){
if(top==-1){
    printf("No Element to delete\n");
    return;
}
else
    top--;
}
int Top(){
return A[top];
}
void print(){
int i;
 printf("stack: ");
 for(i=0;i<=top;i++)
    printf("%d ",A[i]);

 printf("\n");
}
int main(){
push(2); print();
push(5); print();
push(4); print();
push(6); print();
pop(); print();
}
