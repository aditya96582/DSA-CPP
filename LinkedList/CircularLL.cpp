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
    void insertAtHead(int val){
        Node* newNode = new Node(val);
        if(tail == NULL){
            head = tail = newNode;
            tail->next = head;
        } else {
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }
    /*void printLL(){
        if(head == NULL)return;
        cout<<head->data<<"->";
        Node* temp = head->next;
        //Node* temp = head;
        while(temp != head){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
       // cout<<temp->data<<endl;
    }*/
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
    cll.insertAtHead(1);
    cll.insertAtHead(2);
    cll.insertAtHead(3);
    cll.insertAtHead(4);
    cll.printLL();
    return 0;
}