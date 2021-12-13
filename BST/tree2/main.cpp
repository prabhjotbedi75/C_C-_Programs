//minimum and maximum node
#include <iostream>

using namespace std;

struct BstNode{
    int data;
    struct BstNode* left;
    struct BstNode* right;
};
struct BstNode* GetNewNode(int data){
    struct BstNode* newnode = new BstNode();
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;
}

struct BstNode* Insert(BstNode* root,int data){
    if(root==NULL){
        root=GetNewNode(data);
    }
    else if(data <= root->data){
        root->left=Insert(root->left,data);
    }
    else{
        root->right=Insert(root->right,data);
    }
    return root;
}
int FindMin(BstNode* root){
    if(root==NULL){
        cout<<"Tree is Empty\n";
        return -1;
    }
    else if(root->left==NULL){
        return root->data;
    }
    else FindMin(root->left);
}
int FindMax(BstNode* root){
    if(root==NULL){
        cout<<"Tree is Empty\n";
        return -1;
    }
    else if(root->right==NULL){
        return root->data;
    }
    else return FindMax(root->right);
}
int main(){
    int a,b;
    struct BstNode* root=NULL;
    root=Insert(root,20);
    root=Insert(root,10);
    root=Insert(root,25);
    root=Insert(root,5);
    root=Insert(root,8);
    root=Insert(root,30);
    a=FindMin(root);
    cout<<"Minimum Value is:"<<a<<endl;
    b=FindMax(root);
    cout<<"Minimum Value is:"<<b<<endl;
}






