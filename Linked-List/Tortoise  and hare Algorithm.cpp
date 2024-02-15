#include<bits/stdc++.h>
using namespace std;    

class Node{
    public:{
        int data;
        Node* next;

    public: 
    Node(int data1){
        data = data1;
        next = NULL;
    }
    
    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    Node* tortoise = head;
    Node* hare = head;

    while(hare != NULL & hare->next != NULL){
        tortoise = tortoise->next;
        hare = hare->next->next;
    }

    return tortoise;
}