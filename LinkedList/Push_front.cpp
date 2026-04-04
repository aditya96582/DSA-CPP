/*#include<bits/stdc++.h>
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
void print(){
    Node* temp = head;
    while(temp  != NULL){
        cout << temp->data << "->"; 
        temp = temp->next;
    }
    cout << "NULL" <<endl;
}
};
int main(){
    List ll;
    ll.push_front(10);
    ll.push_front(20);
    ll.push_front(30);
    ll.print();
    return 0;
}*/


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
void print(){
Node* temp = head;
while(temp != NULL){
cout << temp->data << "->";
temp = temp->next;
}
cout<<"NULL"<<endl;
}
};
int main(){
List ll;
ll.push_front(1);
ll.push_front(20);
ll.push_front(11);
ll.push_front(16);
ll.print();
return 0;
}

