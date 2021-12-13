//DoublyLinkedList
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* head;
struct Node* GetNode(int x){
    struct Node* newnode =  (struct Node*)malloc(sizeof(struct Node));
    newnode->data=x;
    newnode->next=NULL;
    newnode->prev=NULL;
    return newnode;
}
void Insert(int x){
struct Node* newnode = GetNode(x);
if(head==NULL){
    head = newnode;
    return;
}
head->prev =newnode;
newnode->next = head;
head=newnode;
}
void Print(){
    struct Node* temp=head;
    printf("FORARD :");
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void Rprint(){
struct Node* temp=head;
while(temp->next!=NULL){
    temp=temp->next;
}
printf("REVERSE:");
while(temp!=NULL){
    printf("%d",temp->data);
    temp=temp->prev;
}
printf("\n");
}
int main(){
    head = NULL;
    Insert(3);Print(); Rprint();
    Insert(6);Print(); Rprint();
    Insert(8);Print(); Rprint();
    Insert(2);Print(); Rprint();
    Insert(9);Print(); Rprint();
}
