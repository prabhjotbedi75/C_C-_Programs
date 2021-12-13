//Preorder,Inorder,Postorder
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
void PreOrder(BstNode* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}
void InOrder(BstNode* root){
    if(root==NULL) return;
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}
 void PostOrder(BstNode* root){
    if(root==NULL) return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}

int main(){
    int a,b,c;
    struct BstNode* root=NULL;
    root=Insert(root,20);
    root=Insert(root,10);
    root=Insert(root,25);
    root=Insert(root,5);
    root=Insert(root,8);
    root=Insert(root,30);
    cout<<"PreOrder is :";
    PreOrder(root);
    printf("\n");
    cout<<"InOrder is :";
    InOrder(root);
    printf("\n");
    cout<<"PostOrder is :";
    PostOrder(root);
}





