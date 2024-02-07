#include<bits/stdc++.h>
using namespace std;

//class to define the structure of a node

class Node {
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

//function to convert array to linked list

Node* ConvertArrayToLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    
    return head;
}

//function to search through the linked list

int SearchThroughLL(Node* head, int val){
    Node* temp = head;
    
    while(temp){
        if(temp->data == val) return 1;
        temp = temp->next;
    }
    return 0;
}


int main(){
    vector<int> arr = {2,3,4,5,6};
    Node* head = ConvertArrayToLL(arr);

    //printing the head of the linked list
    
    cout<<head->data<<endl;

    //traversing the linked list
    
    Node* temp = head;
    
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;

    //searching through the linked list

    cout<<SearchThroughLL(head, 4)<<endl;
}