/*
CODE CHALLENGE: Finding an Element in a Linked List

We have defined the following Singly Linked List Node C++ class for you:

class Node {
    public:
        int value;
        Node* next = NULL;
};

Write a function find(Node* node, int element) that starts at the given node and either returns true if the element exists somewhere in the Linked List, otherwise false if the element does not exist in the Linked List. You may choose to implement it either iteratively or recursively: we will pass in the head node when we call your find function, so both approaches have equally valid solutions.

If you wish to solve the problem in Python, below is the equivalent Singly Linked List Node﻿ Python class defined for you:

class Node:
    value = None
    next = None

Sample Input:
2
0 -> 1 -> 2 -> 3 -> 4 -> 5

Sample Output:
true

*/

bool find(Node* node, int element) {
    do
    {
        if(node->value == element)
            break;
        node = node->next;
    }while(node);
    
    return node;
}