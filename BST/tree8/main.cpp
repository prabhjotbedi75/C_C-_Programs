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
void Inorder(BstNode *root) {
	if(root == NULL) return;

	Inorder(root->left);       //Visit left subtree
	printf("%d ",root->data);  //Print data
	Inorder(root->right);      // Visit right subtree
}
struct BstNode* FindMin(BstNode* root)
{
	while(root->left != NULL) root = root->left;
	return root;
}
struct BstNode* Delete(BstNode* root,int data){
    if(root==NULL)return root;
    else if(data<root->data) root->left=Delete(root->left,data);
    else if(data>root->data) root->right=Delete(root->right,data);
    else //Wohooo ,I found you get ready to be deleted
    {//Case 1 No CHILD
        if(root->right==NULL&&root->left==NULL){
            delete root;
            root=NULL;//Set Dangling pointer to NULL
        }
        //Case 2,Having 1 CHILD
        else if(root->left==NULL){
            struct BstNode* temp=root;
            root=root->right;
            delete temp;
        }
        else if(root->right==NULL){
            struct BstNode* temp=root;
            root=root->left;
            delete temp;
        }
        else//Case 3,Having 2 CHILD'S
            {
            struct BstNode* temp=FindMin(root->right);
            root->data=temp->data;
            root->right=Delete(root->right,temp->data);
        }
    }
    return root;
}
int main(){
    struct BstNode* root=NULL;
    root=Insert(root,20);
    root=Insert(root,10);
    root=Insert(root,25);
    root=Insert(root,5);
    root=Insert(root,8);
    root=Insert(root,30);
    Delete(root,5);
    Inorder(root);
}
