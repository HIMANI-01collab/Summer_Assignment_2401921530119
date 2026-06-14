#include<iostream>
#include<list>
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
    ListNode* middleNode(ListNode* head) {
        int length=0;
        ListNode* ptr1=head;
        ListNode* ptr2=head;
        while(ptr1!=NULL){
            length++;
            ptr1=ptr1->next;
        }
        
        int mid;
        if(length%2!=0){
            mid=length/2;
        }
        for(int i=0;i<mid;i++){
            head=head->next;
        }
        return head;
        
    }
};