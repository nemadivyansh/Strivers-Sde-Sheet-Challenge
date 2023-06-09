// You are given a Singly Linked List of integers and a reference to the node to be deleted. Every node of the Linked List has a unique value written on it. Your task is to delete that node from the linked list.

#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

void deleteNode(LinkedListNode<int> * node) {
    //This solution works.. but instead of shifting every element we can just assign data of node -> next to node and we can give node -> next the address of node -> next -> next, bypassing node -> next;

        // LinkedListNode<int> * a = node;
        // LinkedListNode<int> * b = node -> next;
        // while(1)
        // {
        //     a -> data = b -> data;
        //     if(b -> next ==  NULL) break;
        //     a = b;
        //     b = b -> next;
        // }
        // a -> next = NULL;

    // Better approach
    node -> data = node -> next -> data;
    LinkedListNode<int> * temp = node -> next;
    node -> next = node -> next -> next;
    delete(temp);

}