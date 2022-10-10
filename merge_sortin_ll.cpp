#include <iostream>
using namespace std;
class node{
    int data;
    node*next;
    //node*random;
    
}
//constructor
node(int d){
    this->data=d;
    this->next=NULL;
    //any third refernce had comes we have to do
    //this->random=NULL
}


node*findmid(node*head){
    node*slow=head;
    node*fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast= fast->next->next;
    }
    return slow;
}
node*merge(node*left, node*right){
    if(left==NULL){
        return right;
        }
        if(right==NULL){
            return left;
        }
        node*ans=new node(-1);
        node*temp=ans;
        while(left!=NULL && right !=NULL){
          if (left->data<right->data){
              temp -> next = left;
              left=temp;
              left=left->next;
              
              }
              else{
                  temp -> next = right;
             right=temp;
             right=right->next;
              }
              if(left!=NULL){
                  temp -> next = left;
              left=temp;
              left=left->next;
              }
              if(right!=NULL){
                   temp -> next = right;
             right=temp;
             right=right->next;
              }
              ans=ans->next;
        }
}
node*mergesort(node*head){
    if(head==NULL || head->next==NULL){
      return head;  
        
    }else{
        node*mid=findmid(head);
        node*left=head;
        node*right=mid->next;
        mid->next=NULL;
        
    }
    //recurse call to sort the [](){
        left=mergesort(left);
        right=mergesort(right);
        
        //merge both left and right sort
        node* result=merge(left, right);
        return result;
    }
}

int main()
{
    cout<<"Hello World";

    return 0;
}
