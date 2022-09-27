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
    ListNode* deleteMiddle(ListNode* head) {
        int len=0;
        ListNode*temp=head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
         ListNode*temp2=head;
        if(len==1){
           head=head->next;
            temp2->next=NULL;
            return head;
        }
        else{
        int mid=len/2;
        mid--;
        while(mid--){
            temp2=temp2->next;
        }
        ListNode*temp3=temp2->next;
        temp2->next=temp3->next;
        temp3->next=NULL;
        return head;
        }
    }
};