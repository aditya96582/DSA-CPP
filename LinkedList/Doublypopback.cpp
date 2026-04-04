#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        this->data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class DoublyList{
    Node* head;
    Node* tail;
    public:
    DoublyList(){
        head = tail = NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}
void pop_back(){
    if(head == NULL){
        cout<<"LL is empty\n";
        return;
    }
        if(head == tail){
            delete head;
            head = tail = NULL;
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        if(tail != NULL){
            tail->next = NULL;
        }
        temp->prev = NULL;
        delete temp;
    }
void print(){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
    temp = temp->next;
    }
    cout<<"NULL"<<endl;
   }
};
int main(){
    DoublyList dll;
    dll.push_front(10);
    dll.push_front(20);
    dll.push_front(30);
    dll.push_front(40);
    dll.push_front(50);
    dll.pop_back();
    dll.print();
    return 0;
}