#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node( int data){

        this->data = data;
        this->next = NULL;
    }
};

void reverse(node* &head, node* curr, node* prev){
  //base case
  if(curr==NULL){
    head= prev;
    return;
  }  
  node*forward = curr->next;
  reverse(head,forward,curr);
  curr->next = prev;
}


node* reverseLinkedlist(node* head){
    node* curr = head;
    node* prev = NULL;
    reverse(head, curr, prev);
    return head;
}

//     if(head == NULL || head -> next == NULL){
//         return head;
//     }
//     node* prev= NULL;
//     node* curr= head;

//     while(curr != NULL){
//         node* forward = curr->next;
//         forward= curr->next;
//         curr->next= prev;
//         prev=curr;
//         curr=forward;
//     }
//     return prev;
// 

int main(){
   



}

