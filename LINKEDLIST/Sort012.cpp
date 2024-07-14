 
  #include<bits/stdc++.h>
  using namespace std;


    struct Node {

    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;

    }

};



class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
       if(head == NULL|| head -> next == NULL) return head;
        
       Node* zeroStart = new Node(-1);
       Node* oneStart = new Node(-1);
       Node* twoStart = new Node(-1);
       
       Node* zero = zeroStart;
       Node* one = oneStart;
       Node* two = twoStart;
       
       Node* temp = head;
       
       while( temp != NULL){
            
             if(temp -> data == 0){
                  
                  zero -> next = temp;
                  zero = zero -> next;
             }
             
             else if(temp -> data == 1){
                  
                  one -> next = temp;
                  one = one -> next;
             }
             
             else{
                  
                  two -> next = temp;
                  two = two -> next;
             }
                  
            temp = temp -> next;      
       }
       
       zero -> next =  (oneStart -> next != NULL) ?  oneStart -> next : twoStart -> next;
       one -> next = twoStart -> next;
       two -> next = NULL;
       
       return zeroStart -> next;
        
    }


     void printList(Node* head){
     
      Node* temp = head;

      while(temp != NULL){
         
          cout<<temp->data<<" ";
          temp = temp -> next;
      }

      cout<<endl;
  }

};


 

  int main(){

    Node* head = new Node(1);
    head -> next = new Node(2);
    head -> next -> next = new Node(2);
    head -> next -> next -> next = new Node(1);
    head -> next -> next -> next -> next = new Node(2);
    head -> next -> next -> next -> next -> next = new Node(0);
    head -> next -> next -> next -> next -> next -> next = new Node(2);
    head -> next -> next -> next -> next -> next -> next -> next = new Node(2);

    Solution gfg;

    Node* sortedList = gfg.segregate(head);

    gfg.printList(sortedList);
     
      
  }