#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    // constructor
    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    };

    ~Node(){
        int val = this  -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout << "memory free for data : " << val << endl;
    };
};

// traversing a linked list
void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    };

    cout << endl;
};

// gives length of Linked List
int getLength(Node* head){
    int length = 0;
    Node* temp = head;

    while(temp!= NULL){
        length++;
        temp = temp -> next;
    };

    return length;
};

void insertAtHead(Node* &tail, Node* &head, int d){
   if(head == NULL){
    Node* temp = new Node(d);
    head = temp;
    tail = temp;
   }else{
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
   };
};

void insertAtTail(Node* &tail, Node* &head , int d){
    if(head == NULL){
    Node* temp = new Node(d);
    tail = temp;
    head = temp;
   }else{
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
   };
};

void insertAtPosition( Node* &tail, Node* &head, int position, int d){
     if(position == 1){
        insertAtHead(tail , head , d);
        return;
    };

    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    };

    // inserting at last position
    if(temp -> next == NULL){
        insertAtTail(tail , head , d);
        return;
    };
 
    // creating new node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
};


void deleteNode(int position , Node* &head){
    if(position == 1){
        // delete first node
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = head -> next;
        temp -> next = NULL;

        delete temp;
    }else{
        // delete any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        };
        
        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;
    };
};



int main(){


    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    // cout << getLength(head) << endl;
    insertAtTail(tail , head , 15);
    print(head);

    insertAtHead(tail ,head, 20);
    print(head);
    cout << getLength(head) << endl;

    insertAtPosition(tail , head , 2 , 30);
    print(head);

    deleteNode(3 , head);
    print(head);



    return 0;
};