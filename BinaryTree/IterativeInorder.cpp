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
vector<int> inorderTraversal(Node* root){
    vector<int> inorder;
    Node* node = root;
    stack<Node*> st;
    while(true){
        if(node != NULL){
            st.push(node);
            node = node->left;
        } else {
            if(st.empty()==true) break;
            node = st.top();
            st.pop();
            inorder.push_back(node->data);
            node = node->right;
        }
    }
    return inorder;
}
 main(){
        Node* root = new Node(1);
        root->left = new Node(2);
        root->right = new Node(3);  
        root->left->left = new Node(4);
        vector<int> ans = inorderTraversal(root);
        for(int i = 0; i<ans.size(); i++){
            cout << ans[i] << " ";
        }
    }