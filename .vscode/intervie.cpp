#include <iostream>

using namespace std;

// Node structure
struct Node
{
    int data;
    Node *next;
};

// Function to create a new node
Node *createNode(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

// Function to print the linked list
void printList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "null" << endl;
}

int main()
{
    // Creating nodes
    Node *node1 = createNode(10);
    Node *node2 = createNode(20);
    Node *node3 = createNode(30);
    Node *node4 = createNode(40);

    // Linking nodes
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    // Print the linked list
    printList(node1);

    // Free the allocated memory
    delete node1;
    delete node2;
    delete node3;
    delete node4;

    return 0;
}
