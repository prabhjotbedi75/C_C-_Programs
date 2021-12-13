//Is it a Binary Search Tree
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
bool IsSubtreeLesser(BstNode* root,int value){
    if(root==NULL) return true;
    if(root->data <= value && IsSubtreeLesser(root->left,value)&&IsSubtreeLesser(root->right,value)){
        return true;
    }
    else{
    return false;
    }
}
bool IsSubtreeGreater(BstNode* root,int value){
    if(root==NULL)return true;
    if(root->data > value &&IsSubtreeGreater(root->left,value)&&IsSubtreeGreater(root->right,value)){
        return true;
    }
    else{
    return false;
    }
}
bool IsBinarySearchTree(BstNode* root){
    if(root==NULL)return true;
    if(IsSubtreeLesser(root->left,root->data)&&IsSubtreeGreater(root->right,root->data)
       &&IsBinarySearchTree(root->left)&&IsBinarySearchTree(root->right)){
        return true;
       }
    else {
            return false;
       }
}

int main(){
    bool a;
    struct BstNode* root=NULL;
    root=Insert(root,20);
    root=Insert(root,10);
    root=Insert(root,25);
    root=Insert(root,5);
    root=Insert(root,8);
    root=Insert(root,30);
    a=IsBinarySearchTree(root);
    if(a==1){
        cout<<"It is a Binary Search tree"<<endl;
    }
    else{
        cout<<"It is not a binary Search tree"<<endl;
    }
}
