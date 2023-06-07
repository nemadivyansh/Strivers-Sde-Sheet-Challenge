#include <bits/stdc++.h>

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
        if(head == NULL || head -> next == NULL) return head;
        
        LinkedListNode<int> * pvs = nullptr;
        LinkedListNode<int> * curr = head;
        LinkedListNode<int> * nxt;
        while(curr != nullptr)        
        {
            nxt = curr -> next;
            curr -> next = pvs;
            pvs = curr;
            curr = nxt;
        }
        return pvs;
}