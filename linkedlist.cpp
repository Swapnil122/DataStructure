#include <bits/stdc++.h>
struct node{
    int data;
    node* next;
};
struct node* head;
void insert(int x){
    node* temp= new node();
    temp->data=x;
    temp->next= head;
    head =temp;
}
void print(){
    struct node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main(){
    head =NULL;
    printf("How mANy elem ");
    int i,n,x;
    scanf("%d",&n);
    printf("Emter Elem\n");
    for(i=0;i<n;i++){

        scanf("%d",&x);
        insert(x);
        printf("Linked List: ");
        print();
    }
}


