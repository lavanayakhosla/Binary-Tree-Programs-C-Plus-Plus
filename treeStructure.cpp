// This is the program on how to define the structure of a tree in CPP
// I created a structure (custom data type)  called Node
// I have three data members - data (to store the values of each node in the tree) , a pointer of type struct Node , which points to the left child and another point of same type to point to right child.
// I have created a constructor called Node , the constructor is a parametrised constructor that takes argument val , 
// the val argument passed to Node constructor will store val in data, left and right are initialised as NULL pointers
// in the main function first I did dynamic memory allocation using new keyword and stored whatever value i wanted to pass through the constructor. root is the pointer that stores the address of the new Node (1)
// in trees we are basically creating an object , then we declare a pointer to that object , and by dereferencing the pointer we are able to access the object. 
// instead of copying the full object every time we are using the pointer to it. 
// -> operator means root ->left = (*root).left , so we are initialising another object and we are storing its address in pointer called left. 



#include<iostream>
using namespace std;
struct Node {
    int data;
    struct Node * left;
    struct Node * right;
    Node(int val){
        data=val;
        left = right = NULL;

    }
};
int main(){
    struct Node * root = new Node (1);
    root -> left = new Node (2);
    root -> right = new Node(3);
    root -> left ->right= new Node(5);
    cout<<(*root).data;
    cout<< root->left->data;
    cout<< root->left->right->data;
    cout<<root->data;
    
}
