// there are basically two types of traversals in a tree- BFS and DFS 
// there are two terms- visiting of a vertex and exploration of vertex (visiting children)
// in BFS , first take a vertex - root , visit it and then its children , note root and children , then take one of the children and note their children, come back to the other child of root. 
// then note down its children. Basically after writing down the children we are required to come back to the parent , go to the sibling node. 
// For this since we need to make a note of the parent and their children and ensure we dont lose it . We use Queue data structure. 
// We visited root , added that to the queue, we take the size of the queue at that exact moment. now we add its children to the queue. now remove the element.
// now take the next element of queue. take size of queue in that exact moment. then add children to the queue. delete the elemnt also , continue this till this queue becomes empty
// queue has type of Node* being stored in it. 

#include<iostream>
#include <queue>
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

  struct Node *root = new Node(1);
    root -> left = new Node (2);      
    root -> right = new Node (3);  
    root -> left->left = new Node (4);
    root -> left->right = new Node (5);
    root -> right->left = new Node (6);
    root -> right -> right = new Node (7);
    root -> left->right->right = new Node (8);
    root -> right->right->left = new Node (9);

    vector< vector<int> >ans;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
      int size = q.size();
      vector<int>level;
      for(int i =0;i<size;i++){
        Node * node = q.front(); // BASICALLY JO FIRST INDEX OF QUEUE PE HAI THAT VERTEX WE ARE STORING IN ANOTHER NODE 
        q.pop(); // assuming we have visited it 
        if(node->left != NULL){
          q.push(node->left);
          
      }
        if(node->right != NULL){
          q.push(node->right);
          
      }
        level.push_back(node->data);
      
    }
      ans.push_back(level);
  
  
} for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[i].size(); j++) {
        cout << ans[i][j] << " ";
    }
    cout << endl;
}
}
