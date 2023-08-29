#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> q;

    q.push(11);
    q.push(12);
    q.push(13);
    
    cout << "front of q is : " << q.front() << endl;
    cout << "back of q is : " << q.back() << endl;

    cout << "size of queue : " << q.size() << endl;

    q.pop();
    cout << "size of queue : " << q.size() << endl;

    if(q.empty()){
        cout << "empty queue" << endl;
    }else{
        cout << "queue is not empty" << endl;
    };
}