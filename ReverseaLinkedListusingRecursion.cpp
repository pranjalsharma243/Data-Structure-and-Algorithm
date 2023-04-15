class Solution {
public:
   ListNode* ReverseList(ListNode* prev,ListNode* curr)
   {
     if(curr==NULL)
     {
         return prev;
     }
     ListNode* forward=curr->next;
     curr->next=prev;
    return ReverseList(curr,forward);



   }
    ListNode* reverseList(ListNode* head) {
     
     ListNode* prev=NULL;
     ListNode* curr=head;
     return ReverseList(prev,curr);
    }
};
