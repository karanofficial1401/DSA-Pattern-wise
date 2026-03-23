#include<iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node *next;
    Node *prev;
    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};



// create DLL using recursion
Node *createDLL(int arr[], int index, int size, Node *back){
    if(index==size){
        return NULL;
    }
    Node *temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = createDLL(arr, index+1, size, temp);
    return temp;
}


int main(){
    Node *head = NULL;
    // Create a doubly linked list
    int arr[] = {1,2,3,4,5,6};
    // create it using recursion
    head = createDLL(arr,0,6,NULL);

    // Insert at a given position
    int pos = 3;
    // insert at start
    if(pos==0){
        // agar mera linked List exist na kare
        if(head==NULL){
            head = new Node(30);
        }
        else{
            // agar mera linked List exist krta hai
            Node *temp = new Node(30);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }
    else{
        // kya mai node end me insert krna chahta hu ya middle me
        Node *curr =head;
        while(--pos){
            curr = curr->next;
        }
        // agr mujhe last me insert krana ho
        if(curr->next==NULL){
            Node *temp = new Node(30);
            temp->prev = curr;
            curr->next = temp;
        }
        else{
            // agr mujhe khi beech me insert krna ho 
            Node *temp = new Node(30);
            temp->next = curr->next;
            temp->prev = curr;
            curr->next = temp;
            temp->next->prev = temp;
        }
    }

    Node *temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}