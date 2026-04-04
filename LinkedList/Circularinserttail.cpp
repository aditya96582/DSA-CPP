#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        this->data = val;
        this->next = NULL;
    }
};
class CircularList{
    Node* head;
    Node* tail;
    public:
    CircularList(){
        head = tail = NULL;
    }
    void insertAttail(int val){
        Node* newNode = new Node(val);
        if(tail == NULL){
            head = tail = newNode;
            tail->next = head;
        }
        newNode->next = head;
        tail->next = newNode;
        tail = newNode;
    }
        void printLL(){
    if(head == NULL) return;

    cout << head->data;
    Node* temp = head->next;

    while(temp != head){
        cout << "->" << temp->data;
        temp = temp->next;
    }

    cout << endl;

    }
};
int main(){
     CircularList cll;
    cll.insertAttail(1);
    cll.insertAttail(2);
    cll.insertAttail(3);
    cll.insertAttail(4);
    cll.printLL();
    return 0;
}