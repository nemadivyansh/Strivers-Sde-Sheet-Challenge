//Question = You have been given a singly Linked List of 'N' nodes with integer data and an integer 'K'. Your task is to remove the 'K'th node from the end of the given Linked List and return the head of the modified linked list.


/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/


// Approach1 - We can just count nodes and delete N - kth node from beginning.

//Approach2 - We will keep 2 pointers, with K as difference between them. When fast pointer reaches end, slow will point to Kth element from the end of the linked list.

#include <bits/stdc++.h>

Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
    if(head -> next == NULL)
    {
        head = NULL;
        return head;
    }
    Node * slow = head;
    Node * fast = head;
    while(fast -> next != NULL)
    {
        if(K <= 0)
            slow = slow -> next;
        fast = fast -> next;
        K--;
    }
    if(K > 0) return head -> next;
    Node * temp = slow -> next;
    delete(temp);
    slow -> next = slow -> next -> next;

    return head;
}
