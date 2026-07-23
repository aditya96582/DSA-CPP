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
class solution{
    public:
    Node* lowestCommonAncestor(Node* root, Node* p, Node* q){
        if(root == NULL || root == p || root == q){
            return root;
        }
        Node* left = lowestCommonAncestor(root->left, p, q);
        Node* right = lowestCommonAncestor(root->right, p, q);
        if(left == NULL) {
            return right;
        }
        else if(right == NULL){
            return left;
        }
        else {
            return root;
        }
        }
    };
    int main(){
        Node* root = new Node(1);
        root->left = new Node(2);
        root->right = new Node(3);
        root->left->left = new Node(4);
        root->left->right = new Node(5);
        solution ob;
        Node* lca = ob.lowestCommonAncestor(root, root->left->left, root->left->right);
        if(lca != NULL){
            cout << "LCA of 4 and 5 is: " << lca->data << endl;
        } else {
            cout << "LCA does not exist." << endl;
        }
        return 0;
    }