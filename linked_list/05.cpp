#include<iostream>
using namespace std;

// DLL  insert at start
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

int main(){
    Node *head = NULL;
    // Linked List does not exist
    if(head==NULL){
        head = new Node(5);
    }
    // Linked List exist
    else{
        Node *temp = new Node(5);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }

    Node *trav = head;
    while(trav){
        cout<<trav->data<<" ";
        trav = trav->next;
    }

}
