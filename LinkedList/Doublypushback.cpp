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
    //Node* prev;
    public:
    DoublyList(){
        head = tail = NULL;
    }
    void push_back(int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = tail = newNode;
    }
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
    }
    void pop_front(){
        if(head == NULL){
            cout<<"LL is empty\n";
           return;
        }
        Node* temp = head;
        head = head->next;
        if(head != NULL){
            head->prev = NULL;
        }
        temp->next = NULL;
        delete temp;
    };
    
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
    dll.push_back(10);
    dll.push_back(20);
    dll.push_back(30);
    dll.push_back(40);
    dll.push_back(50);
    dll.pop_front();
    dll.print();
    return 0;
}