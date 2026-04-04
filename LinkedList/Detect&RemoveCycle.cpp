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

    // ✅ ADD THIS FUNCTION
    void createCycle(){
        if(head == NULL) return;

        tail->next = head->next;  // creating cycle at node 3
    }
     Node* detectCycle(Node* head){
        Node* slow = head;
        Node* fast = head;
        bool isCycle = false;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                isCycle = true;
                break;
            }
        }
        if(!isCycle){
            return NULL;
        }
        slow = head;
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
     }
};
int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.createCycle(); // create cycle

    Node* cycleStart = ll.detectCycle(ll.getHead());

    if(cycleStart != NULL){
        cout << "Cycle detected at node: " << cycleStart->data << endl;
    } else {
        cout << "No cycle" << endl;
    }
    //ll.printLL();
    return 0;
}