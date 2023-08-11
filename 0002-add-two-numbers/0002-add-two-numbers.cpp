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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *result=new ListNode();
        ListNode * ptr=result;
        int c=0,sum;
        while(l1!=NULL ||l2!=NULL){
            sum=c;
            if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
                
            }
            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
                
            }
            c=sum/10;
            sum=sum%10;
            ptr->next = new ListNode(sum);
            ptr=ptr->next;
        }
        if(c==1){
            ptr->next= new ListNode(1);
        }
        return result->next ;
    }
    
};