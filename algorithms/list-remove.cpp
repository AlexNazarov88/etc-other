/*
CODE CHALLENGE: Removing an Element from a Linked List

We have defined the following Singly-Linked List Node C++ class for you:

class Node {
    public:
        int value;
        Node* next = NULL;
};
Write a function remove(Node* head, int index) that removes the element at index index of the Linked List. We guarantee that we will not have you remove from the very beginning nor the very end of the Linked List (so you won't need to worry about updating the head or tail pointers of the Linked List).


Sample Input:

2
0 -> 1 -> 2 -> 3 -> 4 -> 5
Sample Output:

0 -> 1 -> 3 -> 4 -> 5
*/

void remove(Node* head, int index) {
    while (--index)
		head = head->next;
	head->next = head->next->next;
}
