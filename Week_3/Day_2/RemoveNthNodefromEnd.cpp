#include<bits/stdc++.h>
using namespace std;




struct ListNode {
     int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        ListNode *curr=head;
        ListNode *prev=nullptr;
        int start=count-n;

        if(start==0)  return head->next;

        for(int i=0;i<start;i++){
            prev=curr;
            curr=curr->next;
        }
        
        prev->next=curr->next;
        return head;

    }

    
};