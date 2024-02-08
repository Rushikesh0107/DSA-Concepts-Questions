#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    
    public: 
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

//remove the element from the head of the linked list

Node* RemoveHead(Node* head){
    Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

// Remove the tail of the linked list

Node* RemoveTail(Node* head){
    Node* temp = head;
    if(temp->next->next !== NULL){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = nullptr;
    return head;
}

Node* ConvertArrayToLL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    
    return head;
}

int main(){
    vector<int> arr = {1,2,3,4,55,6};

    //converting the array to linked list
    
    Node* head = ConvertArrayToLL(arr);

    //removing the head and tail of the linked list
    
    Node* newHead = RemoveHead(head);

    //removig the tail of the linked list

    RemoveTail(newHead);

    //printing the linked list

    Node*temp = newHead;
    
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}