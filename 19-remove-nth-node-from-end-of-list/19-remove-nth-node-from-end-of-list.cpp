/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=0;
        ListNode*temp=head;
        ListNode*temp1=head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        int find=(len-n)+1;
        if(find==1){
            head=head->next;
            temp1->next=NULL;
            return head;
        }
        find-=2;
        
         
          while(find--){
                temp1=temp1->next;
             }
            ListNode*ans=temp1->next;
           
            temp1->next=ans->next;
            ans->next=NULL;
           
        
        return head;
    }
};