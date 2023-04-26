#include <iostream>
using namespace std;
class Node{

public:
int data;
Node* next;
Node(int data)
{
  this->data=data;
  this->next=NULL;
}

};
int getlen(Node* &head)
{
Node* temp=head;
int len=0;
while(temp!=NULL)
{
  len++;
  temp=temp->next;
}
return len;
}
Node* reverseIngroups(Node* &head, int k)
{
if(head==NULL)
{
  return head;
}
int len=getlen(head);
if(k>len)
{
return head;
}
//k<=len
Node* prev=NULL;
Node* curr=head;
Node* forward=curr->next;
int count=0;
while(count<k)
{
forward=curr->next;
curr->next=prev;
prev=curr;
curr=forward;
count++;
}
if(forward!=NULL)
{
 head->next=reverseIngroups(forward,k);
}
return prev;

}
void print(Node* &head)
{
Node* temp=head;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}

}

int main() {
  Node* head=new Node(10);
  Node* second=new Node(20);
  Node* third =new Node(30);
  Node* fourth=new Node(40);
  Node* fifth=new Node(50);
  Node* sixth=new Node(60);
  Node* seventh=new Node(70);
  Node* eighth=new Node(80);
  Node* ninth=new Node(90);
   head->next=second;
  second->next=third;
  third->next=fourth;
  fourth->next=fifth;
  fifth->next=sixth;
  sixth->next=seventh;
  seventh->next=eighth;
  eighth->next=ninth;
  ninth->next=NULL;
  int k=3;
  head=reverseIngroups(head,k);
  print(head);
  return 0;
}
