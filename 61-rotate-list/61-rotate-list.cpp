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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return head;
        }
        int len=0;
        ListNode*sol=head;
        while(sol!=NULL){
            len++;
            sol=sol->next;
            
        }
        if(k>len){
            k=(k%len);
        }
        
            while(k--){
               ListNode*temp=head;
                while(temp->next->next!=NULL){
                    temp=temp->next;
                }
                ListNode*n=temp->next;
                 n->next=head;
                head=n;
                temp->next=NULL;
            }
        
        return head;
    }
};