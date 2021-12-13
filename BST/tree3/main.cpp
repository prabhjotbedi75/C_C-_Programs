//Height Of tree
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
int HeightOfTree(BstNode* root){
    if(root==NULL){
        return -1;
    }
    else return max(HeightOfTree(root->left),HeightOfTree(root->right))+1;
}
int main(){
    int a;
    struct BstNode* root=NULL;
    root=Insert(root,20);
    root=Insert(root,10);
    root=Insert(root,25);
    root=Insert(root,5);
    root=Insert(root,8);
    root=Insert(root,30);
    a=HeightOfTree(root);
    cout<<"Height Of Tree:"<<a;
}






