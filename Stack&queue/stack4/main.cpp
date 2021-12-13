#include <iostream>
#include<stack> //Stack from std template library (STL)

using namespace std;

struct Node {
    int data;
    struct Node* next;
};
struct Node* head;//global variable which can be accessed anywhere
void Insert(int x) {
    Node* temp = new Node;
    temp->data = x;
    temp->next = head;
    head = temp;
}
void Print(struct Node* temp){
    if(temp==NULL) return;
    printf("%d",temp->data);
    Print(temp->next);
}
void Reverse(){
    stack<struct Node*>S;
    if(head==NULL) return;
    struct Node* temp = head;
    while(temp!=NULL){
        S.push(temp);
        temp=temp->next;
    }
    temp=S.top();
    head=temp;
    S.pop();
    while(!S.empty()){
        temp->next=S.top();
        S.pop();
        temp=temp->next;
    }
    temp->next=NULL;
}
int main(){
    head = NULL; //empty list;
    Insert(2);
    Insert(4);
    Insert(1);
    Insert(3);
    Insert(6);
    printf("Normal List is:\n");
    Print(head);
    printf("\nReverse Using stack\n");
    Reverse();
    Print(head);
}
