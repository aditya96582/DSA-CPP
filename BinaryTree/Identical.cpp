#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
     Node* left;
     Node* right;
    Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};
class Solution {
public:
bool isSameTree(Node* p, Node* q){
    if(p == NULL || q == NULL){
    return (p == q);
}
return (p->data == q->data) 
&& isSameTree(p -> left, q -> left)
&& isSameTree(p -> right, q -> right);
    }
};
 int main(){
        Node* root1 = new Node(1);
        root1 -> left = new Node(2);
        root1 -> right = new Node(3);  
        root1 -> left -> left = new Node(4);
        
        Node* root2 = new Node(1);
        root2 -> left = new Node(2);
        root2 -> right = new Node(3);  
        root2 -> left -> left = new Node(4);

        Solution ob;
        if(ob.isSameTree(root1, root2)){
            cout << "The trees are identical." << endl;
        } else {
            cout << "The trees are not identical." << endl;
        }
    }