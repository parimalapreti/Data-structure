#include <stdio.h>
#include <stdlib.h>

// Structure of node
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the end
void insert(struct Node** head, int value) {

    // Create new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = NULL;

    // If list is empty
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    // Traverse to last node
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Link new node
    temp->next = newNode;
}

// Function to print linked list
void printList(struct Node* head) {

    struct Node* temp = head;

    printf("Linked List: ");

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main() {

    struct Node* head = NULL;

    // Inserting elements
    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 30);
    insert(&head, 40);

    // Printing linked list
    printList(head);

    return 0;
}
