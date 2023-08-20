#include <iostream>
using namespace std;

class Node{
    public :
    int data ;
    Node* next;

    // constructor
    Node(int data){
        this -> data = data;
        this -> next = Null;
    }
}


int main(){
    Node* nodel = new Node();

    cout << nodel -> data << endl;
    cout << nodel -> next << endl;
}