#include<bits/stdc++.h>
using namespace std;

class Node{
    
    public:
    int data;
    Node* next;
    Node* back;
    
    public:
    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next1 = next1;
        back = back1;
    }
    
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

//converting array to DLL

Node* ConvertArrayToDLL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        temp->back = prev;
        prev->next = temp;
        prev = temp;
    }
    
    return head;
}

//deleting the head of the DLL

Node* DeleteHead(Node* head){
    if(head == NULL) return head;
    
    Node* prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    free(prev);
}

//deleting the tail of the DLL

Node* DeleteTail(Node* head){
    if(head == NULL || head->next == NULL) return delete head;
    
    Node* temp = head;
    
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    temp->next->back = nullptr;
    temp->next = nullptr;
    free(temp->next);
    return head;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    
    Node* head = ConvertArrayToDLL(arr);
    
    Node* temp = DeleteHead(head);
    DeleteTail(temp);

    //printing DLL in forward direction
    
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}