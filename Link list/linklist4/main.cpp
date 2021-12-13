//Reverse using iterative
#include <iostream>

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
void Reverse(){
    struct Node *current, *prev, *next;
    current = head;
    prev = NULL;
    while(current!=NULL)
    {
        next = current->next;
        current->next=prev;
        prev = current;
        current= next;
    }
    head = prev;
}
void Print(){
    Node* temp = head;
    printf(" Reversed Linked List is: ");
    while(temp!= NULL)
    {
        printf("%d",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    head = NULL; //empty list;
    Insert(2);
    Insert(4);
    Insert(1);
    Insert(3);
    Insert(6);
    Reverse();
    Print();
}
