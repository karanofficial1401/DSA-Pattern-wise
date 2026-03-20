#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

Node *createLinkedList(int arr[], int index, int size){
    // Base case
    if(index==size)
        return NULL;
    
    Node *temp;
    temp = new Node(arr[index]);
    temp->next = createLinkedList(arr, index+1, size);
    return temp;
}

int main(){
    Node *head;
    head = NULL;

    int arr[] = {2,4,6,8,10};
    head = createLinkedList(arr, 0, 5);

    // Reverse a linked list
    vector<int>ans;
    Node *curr = head;
    while(curr!=NULL){
        ans.push_back(curr->data);
        curr = curr->next;
    }
    int i=ans.size()-1;
    curr=head;
    while(curr!=NULL){
        curr->data = ans[i];
        i--;
        curr = curr->next;
    }

    // Print all the vlaues
    Node *temp;
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}