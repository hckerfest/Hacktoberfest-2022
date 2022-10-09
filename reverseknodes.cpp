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

/*
  Input: head = [1,2,3,4,5], k = 2
Output: [2,1,4,3,5]
*/
class Solution {
public:
    void reverse(ListNode *s,ListNode *e){
        ListNode *p=NULL,*c=s,*n=s->next;
        while(p!=e){
            c->next=p;
            p=c;
            c=n;
            if(n!=NULL)n=n->next;
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL or head->next==NULL or k==1)return head;
        ListNode *s=head,*e=head;
        int inc=k-1;
        while(inc--){
            e=e->next;
            if(e==NULL)return head;
        }
        ListNode* nextHead=reverseKGroup(e->next,k);
        reverse(s,e);
        s->next=nextHead;
        return e;
    }
};
