#include<iostream>
using namespace std;
class Node{
 public:
 int data;
 Node* next;
};
void Insert(Node* &head_ref,int new_data){
Node *new_node=new Node();
new_node->data=new_data;
new_node->next=(head_ref);
head_ref=new_node;

}
void InsertAtTail(Node* &tail,int new_data){
    Node *new_node=new Node();
    new_node->data=new_data;
    tail->next=new_node;
    tail=new_node;
}
void printl(Node *node){
    while(node!=NULL){
        cout<<" "<<node->data;
        node=node->next;
    }
    

}
int main(){
    Node *head=NULL;
    Node *tail=NULL;

    InsertAtTail(tail,12);
      InsertAtTail(tail,13);
        InsertAtTail(tail,14);
          InsertAtTail(tail,15);
    printl(head);

}