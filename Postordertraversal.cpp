#include<iostream>
using namespace std;
struct Node {
    int data;
    struct Node * left;
    struct Node *right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void PostOrderTraversal(Node * A){
    if (A==NULL) return;
  
    PostOrderTraversal(A->left);
    PostOrderTraversal(A->right);
    cout<<(A->data);

}
int main(){
    struct Node * root = new Node (1); 
    root -> left = new Node (2);      
    root -> right = new Node (3);  
    root -> left->left = new Node (4);
    root -> left->right = new Node (5);
    root -> right->left = new Node (6);
    root -> right -> right = new Node (7);
    root -> left->right->right = new Node (8);
    root -> right->right->left = new Node (9);
    PostOrderTraversal(root);


    return 0;
}
