//Level Order traversal
#include <iostream>
#include<queue>

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
void LevelOrder(BstNode* root){
    if(root==NULL)return;
    queue<BstNode*>Q;
    Q.push(root);
    //While there is at least one node in queue
    while(!Q.empty()){
        struct BstNode* current = Q.front();
        cout<<current->data<<" ";
        if(current->left!=NULL)Q.push(current->left);
        if(current->right!=NULL)Q.push(current->right);
        Q.pop();/*removing the element at front*/
    }
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
    LevelOrder(root);
}





