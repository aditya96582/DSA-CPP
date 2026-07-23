#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        this->data = val;
        this->left =- NULL;
        this->right = NULL;
    }
};
class Solution {
public:
 vector<vector<int>> zigzagLevelOrder(treeNode* root){
    vector<vector<int> result;
    if (root == NULL) return result;
 }
 queue<treeNode*> q;
 q.push(root);
 bool leftToRight = true;
 while(!q.empty()){
int size = q.size();
vector<int> row(size);
for(int i=0; i<size;i++){
    treeNode* node = q.front();
    q.pop();
    int leftIndex = leftToRight ? i : size - 1 - i;
    row[leftIndex] = node->data;
}
 result.push_back(row);
 leftToRight = !leftToRight;
 }
}