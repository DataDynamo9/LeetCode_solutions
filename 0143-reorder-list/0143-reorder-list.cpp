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
    void reorderList(ListNode* head) {
       if(head==NULL && head->next==NULL ){
        return;
       }
    ListNode*dummy=new ListNode(0);
        dummy->next=head;
       
        ListNode*count=head;
        int n=0;
        while(count!=NULL){
            n++;
            count=count->next;
        }
        for(int i=0;i<n/2;i++){
             ListNode*temp=head;
              ListNode*prev=dummy;
            while(temp->next!=NULL){
                prev=temp;
               temp=temp->next;
            }
               if (prev==head)
               break;
             temp->next=head->next;
             prev->next=NULL;
             head->next=temp;
             head=head->next->next;
        
        }
      
    }
};