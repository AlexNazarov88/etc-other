/*
CODE CHALLENGE: Inserting an Element into a Linked List

We have defined the following Singly Linked List Node C++ class for you:

class Node {
    public:
        int value;
        Node* next = NULL;
};

Write a function insert(Node* head, Node* newnode, int index) that inserts newnode into index index of the Linked List. We guarantee that we will not have you insert at the very beginning nor the very end of the Linked List (so you won't need to worry about updating the head or tail pointers of the Linked List).

Sample Input:

6 2
0 -> 1 -> 2 -> 3 -> 4 -> 5
Sample Output:

0 -> 1 -> 6 -> 2 -> 3 -> 4 -> 5

*/

void insert(Node* head, Node* newnode, int index) {
    while (--index)
        head = head->next;
    newnode->next = head->next;
    head->next = newnode;
}