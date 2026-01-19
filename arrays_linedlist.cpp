//array is a collection of elements of same data type stored in contiguous memory locations
//by using array we make stack , queue and deque.

#include <iostream>
using namespace std;

// Node structure for Linked List
struct Node {
    int data;
    Node* next;
};

int main() {
    // declaring and initializing an array of size 5
    int arr[5] = {2, 4, 8, 12, 16};
    
    // printing array elements
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    //linked list is a collection of elements called nodes , where each node contains data and a pointer to the next node in the sequence
    //by using linkedlist we study about hashmap , set , tree and graph.

    // Linked List Example
    // Creating nodes
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // Assigning data and linking nodes
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = nullptr;
    
    // Printing the linked list
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    return 0;
}


