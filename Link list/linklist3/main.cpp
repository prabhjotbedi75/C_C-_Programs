//Deletion of a node
#include <iostream>

using namespace std;

struct Node {
    int data;
    struct Node* next;
};
struct Node* head; //global variable which can be accessed anywhere
void Insert(int x) {
    Node* temp = new Node;
    temp->data = x;
    temp->next = head;
    head = temp;
}
void Print(){
    Node* temp = head;
    printf("List is: ");
    while(temp!= NULL)
    {
        printf("%d",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void Delete(int a){

    Node* temp1 = head;
    if(a == 1){
        head=head->next;
        free(temp1);
        return;
    }
    else{
        //Reaching pos n-1
        for(int i=0;i<a-2;i++){
            temp1=temp1->next;
        }
        Node* temp2 = temp1->next;//Pointing to nth pos
        temp1->next = temp2->next;
        free(temp2);
    }
}
int main(){
    head = NULL; //empty list;
    int n,i,x,a;
    printf("how many numbers?");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the number:");
        scanf("%d",&x);
        Insert(x);
        Print();
    }
    printf("Enter the number position which you want to delete");
    scanf("%d",&a);
    Delete(a);
    Print();
}
