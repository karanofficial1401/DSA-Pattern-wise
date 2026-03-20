#include<iostream>
using namespace std;

// Delete a Node at beginning  

// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(int val){
//         data = val;
//         next = NULL;
//     }
// };

// Node *createLinkedList(int arr[], int index, int size){
//     // base case
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

//     int arr[] = {2,4,6,8};
//     head = createLinkedList(arr,0,4);
//     if(head!=NULL){
//         Node *temp = head;
//         head = head->next;
//         delete temp;
//     }
//     // print all the values
//     Node *temp;
//     temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }



// delete a node at end

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
//     // base case
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

//     int arr[] = {1,2,3,4,5,6};

//     head = createLinkedList(arr,0,6);

//     if(head!=NULL){
//         // only one node is present
//         if(head->next==NULL){
//             Node*temp = head;
//             delete temp;
//             head = NULL;
//         }
//         // more than one node is present
//         else{
//             Node *curr = head;
//             Node *prev = NULL;
//             while(curr->next!=NULL){
//                 prev = curr;
//                 curr = curr->next;
//             }
//             delete curr;
//             prev->next = NULL;
//         }
//     }

//     // Print all the values
//     Node *temp;
//     temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }




// delete a node in a particular position

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
//     // base case
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

//     int arr[] = {1,2,3,4,5,6};

//     head = createLinkedList(arr,0,6);

//     int x = 4;
//     if(x==1){
//         Node *temp = head;
//         head = head->next;
//         delete temp;
//     }else{
//         x--;
//         Node *curr = head;
//         Node *prev = NULL;
//         while(x--){
//             prev = curr;
//             curr = curr->next;
//         }
//         prev->next = curr->next;
//         delete curr;
//     }


//     // Print all the values
//     Node *temp;
//     temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }



