#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int val){
        this->data = val;
        this->next = NULL;
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
    void push_back(int val){
      Node* newNode = new Node(val);
      if(head == NULL){
        head = tail = newNode;
        return;
      }
      tail->next = newNode;
      tail = newNode;
    }
    void pop_front(){
        if(head == NULL){
            cout<<"List is empty"<<endl;
            return;
        }
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
        void pop_back(){
            if(head == NULL){
                cout<<"List is empty"<<endl;
                return;
            }
            if(head == tail){
                delete head;
                head = tail = NULL;
                return;
            }
            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            temp->next = NULL;
            delete tail;
            tail = temp;
        }
        void print (){
            Node* temp = head;
            while(temp != NULL){
                cout<<temp->data<<"->";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
        }
    };
int main(){
    List ll;    
    ll.push_back(1);
    ll.push_back(20);   
    ll.push_back(11);
    ll.push_back(16);
   // ll.pop_front();
   // ll.pop_back();
    ll.print();
    return 0;
}
