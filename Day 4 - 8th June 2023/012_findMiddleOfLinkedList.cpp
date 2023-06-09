#include <bits/stdc++.h>
Node *findMiddle(Node *head) {
    // Write your code here
    Node * slow = head;
    Node * fast = head;
    if(head -> next == NULL) return head;
    while(1){
        if(fast -> next == NULL) {
            return slow;
        }
        else if(fast -> next -> next == NULL)
        {
            return slow -> next;
        } 
        slow = slow -> next;
        fast = fast -> next -> next;
    }
}