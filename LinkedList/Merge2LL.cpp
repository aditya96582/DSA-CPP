#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        this->data = val;
        this->next =NULL;
    }
};
class List{
    Node* head;
    Node* tail;
    public:
    List(){
        head = tail = NULL;
    }
    void push_front(int val){
     Node* newNode = new Node(val);
     if(head == NULL){
        head = tail = newNode;
        return;
     } 
    newNode->next = head;
    head = newNode;
    }
    void printLL(){
        Node* temp = head;
        while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
Node* getHead(){
    return head;
  }
};
Node* mergeTwoLists(Node* head1, Node* head2){
    if(head1 == NULL) return head2;
    if(head2 == NULL) return head1;
    
    if(head1->data <= head2->data){
        head1->next  = mergeTwoLists(head1->next, head2);
        return head1;
    } else {
        head2->next = mergeTwoLists(head1 , head2->next);
        return head2;
    }
}
int main(){
    List l1, l2;
    l1.push_front(5);
    l1.push_front(3);
    l1.push_front(1);
    l2.push_front(6);
    l2.push_front(4);
    l2.push_front(2);
      Node* mergedHead = mergeTwoLists(l1.getHead(), l2.getHead());

    // print merged list
    Node* temp = mergedHead;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    return 0;
}