#include <bits/stdc++.h>

bool detectCycle(Node *head)
{
	//	Write your code here
    if(head == NULL) return false;
    if(head -> next == NULL) return false;
    Node * slow = head;
    Node * fast = head -> next -> next;
    // while (fast != NULL && fast->next != NULL) {
    //   if (fast == slow)
    //     return true;

    //   slow = slow->next;
    //   fast = fast->next->next;
    // }
    while(1)
    {
        if(fast == NULL)
            return false;
        if(fast -> next == NULL)
            return false;
            if(!slow) return false;
        if(fast == slow) return true;

        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return false;
}