#include<iostream>
using namespace std;


// Create a node using static way
// class Node{
//     public:
//     int data;
//     Node *next; 
// };

// int main(){
//     Node A1;
//     A1.data = 4;
//     A1.next = NULL;
//     cout<<A1.data;
// }


// create a Node using dynamic way


//  Insert at the beginning
// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(int value){      //using constructor
//         data = value;
//         next = NULL;
//     }
// };
// int main(){
//     Node *Head;
//     Head = NULL;

//     int arr[] = {45,1,151,54,218,7,2};

//     for(int i=0;i<7;i++){
//         // Linked List exist ni krti
//         if(Head==NULL){
//             Head = new Node(arr[i]);
//         }
//         // Linked List exist krti hai
//         else{
//             Node *temp;
//             temp = new Node(arr[i]);
//             temp->next = Head;
//             Head = temp;
//         }
//     }

//     // Print the value
//     Node *temp = Head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }



// Insert at the end

// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(int val){
//         data=val;
//         next=NULL;
//     }
// };
// int main(){
//     Node *Head = NULL;
//     int arr[] = {2,4,6,8};
//     for(int i=0;i<4;i++){
//         if(Head==NULL){
//             Head = new Node(arr[i]);
//         }
//         else{
//             Node *tail = Head;
//             while(tail->next!=NULL){
//                 tail = tail->next;
//             }
//             Node *temp = new Node(arr[i]);
//             tail->next = temp;
//         }
//     }
//     // print all the value
//     Node *curr = Head;
//     while(curr!=NULL){
//         cout<<curr->data<<" ";
//         curr = curr->next;
//     }
// }


// Optimal 
// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(int val){
//         data=val;
//         next=NULL;
//     }
// };
// int main(){
//     Node *Head = NULL;
//     Node *tail = NULL;
//     int arr[] = {2,4,6,8};
//     for(int i=0;i<4;i++){
//         if(Head==NULL){
//             Head = new Node(arr[i]);
//             tail=Head;
//         }
//         else{
//             tail->next = new Node(arr[i]);
//             tail = tail->next;
//         }
//     }
//     // print all the value
//     Node *curr = Head;
//     while(curr!=NULL){
//         cout<<curr->data<<" ";
//         curr = curr->next;
//     }
// }




// Add node at the end using recursion

// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(int val){
//         data=val;
//         next=NULL;
//     }
// };

// Node *createLinkedList(int arr[], int index, int size){
//     // Base case
//     if(index==size)
//         return NULL;
    
//     Node *temp;
//     temp = new Node(arr[index]);
//     temp->next = createLinkedList(arr, index+1, size);
//     return temp;
// }

// int main(){
//     Node *head;
//     head = NULL;

//     int arr[] = {2,4,6,8,10};
//     head = createLinkedList(arr, 0, 5);

//     // Print all the vlaues
//     Node *temp;
//     temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }

// }




// Add node at beginning using recursion

// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(int val){
//         data=val;
//         next=NULL;
//     }
// };

// Node *createLinkedList(int arr[], int index, int size, Node *prev){
//     // Base case
//     if(index==size){
//         return prev;
//     }
//     Node *temp;
//     temp = new Node(arr[index]);
//     temp->next = prev;
//     return createLinkedList(arr, index+1, size, temp);
// }

// int main(){
//     Node *head;
//     head = NULL;
    
//     int arr[] = {2,4,6,8};
//     head = createLinkedList(arr,0,4,NULL);

//     // Print all the values
//     Node *temp;
//     temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }



// insert at middle

// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(int val){
//         data=val;
//         next=NULL;
//     }
// };

// Node *createLinkedList(int arr[], int index, int size){
//     if(index==size){
//         return NULL;
//     }
//     Node *temp;
//     temp = new Node(arr[index]);
//     temp->next = createLinkedList(arr, index+1, size);
//     return temp;
// }

// int main(){
//     Node *head;
//     head = NULL;

//     int arr[] = {2,4,6,8,10};
//     head = createLinkedList(arr,0,5);

//     int x = 3;
//     int value = 30;
//     Node *temp = head;
//     x--;
//     while(x--){
//         temp = temp->next;
//     }
//     Node *temp2;
//     temp2 = new Node(value);
//     temp2->next = temp->next;
//     temp->next = temp2;

//     // print all the values
//     // Node *temp;
//     temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }

// }


// Insert at middle

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
    if(index==size){
        return NULL;
    }
    Node *temp;
    temp = new Node(arr[index]);
    temp->next = createLinkedList(arr,index+1,size);
    return temp;
}

int main(){
    Node *head = NULL;

    int arr[] = {2,4,6,8,10};
    head = createLinkedList(arr,0,5);

    // print the values
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }   
}