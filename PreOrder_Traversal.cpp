// In DFS There are three types of Traversal , Here we have Preorder traversal which means that first we visit root node , then we visit one of its many children 
// next we visit one child out of its many children, when we reach leaf node then we go back and visit the sibling to the depth. so these preorder inorder post order are basically order in which we want to visit the children a scheme of visiting children




#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *left;
    struct Node * right;
    Node(int val){
        data=val;
        left = right = NULL;

    }
};
void PreOrderTraversal(Node *A){
  if(A==NULL) return;
  cout<<A->data;
  PreOrderTraversal(A->left);
  PreOrderTraversal(A->right);
  
}

int main(){
    struct Node *root = new Node(1);
    root -> left = new Node (2);      
    root -> right = new Node (3);  
    root -> left->left = new Node (4);
    root -> left->right = new Node (5);
    root -> right->left = new Node (6);
    root -> right -> right = new Node (7);
    root -> left->right->right = new Node (8);
    root -> right->right->left = new Node (9);

    PreOrderTraversal(root);
}
