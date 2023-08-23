#include <iostream>
using namespace std;

class Node{
    public :
    int data ;
    Node* next;

    // constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    };

    // destructor
    ~Node(){
        int value = this -> data;
        // memory free
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "memory is free for node : " << value << endl;
    };

};

void insertAtHead(Node* &head , int d){

    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
};

void insertAtTail(Node* &tail, int d){
    // new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
};

// print linked list
void print(Node* &head){
    Node* temp = head;
    while(temp!= NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    };
    cout << endl;
};

void insertAtPosition(Node* &tail , Node* &head,int position , int d){

    if(position == 1){
        insertAtHead(head , d);
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
        insertAtTail(tail , d);
        return;
    };


    // creating new node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
};


void deleteNode(int position , Node* &head){
    if(position == 1){
        // delete first node
        Node* temp = head;
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
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    };
};


int main(){
    Node* nodel = new Node(5);

    //cout << nodel -> data << endl;
    //cout << nodel -> next << endl;

    // head pointed to nodel 
    Node* head = nodel;
    Node* tail = nodel;
    print(head);

    

    insertAtHead(head, 10);
      print(head);
    insertAtHead(head, 20);
      print(head);

    insertAtTail(tail, 30);
      print(head);
    insertAtTail(tail, 40);
      print(head);
    insertAtTail(tail, 50);
      print(head);

    insertAtPosition(tail , head , 4 , 25);
    print(head);

    insertAtPosition(tail ,head , 1 , 30);
    print(head);

    deleteNode(4 , head);
    print(head);

    // print(head);

    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;
    return 0;
}