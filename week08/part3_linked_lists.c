// part3_linked_lists.c
// Program tests linked lists functions

#include <stdio.h>
#include <stdlib.h>


struct node {
    // The data stored in the node
    int data;
    // Pointer to the next node in the linked list
    struct node *next;
};

struct node *create_node(int data);

struct node *insert_head(struct node *head, int data);

struct node *insert_tail(struct node *head, int data);

void print_list(struct node *head);

int list_length(struct node *head);

int main(void) {

    // Create a pointer to the head of the linked list
    struct node *head = NULL;

    // Insert a node at the beginning of the linked list
    head = insert_head(head, 10);

    // Insert a node at the beginning of the linked list
    head = insert_head(head, 5);

    // Insert a node at the end of the linked list
    head = insert_tail(head, 15);

    // Insert a node at the end of the linked list
    head = insert_tail(head, 20);

    // Print the linked list
    print_list(head);

    // Calculate and print the length of the linked list
    int length = list_length(head);
    printf("There are %d nodes in the list\n", length);

    return 0;
}

// Creates a new node
//
// Parameters:
//      data: The data to be stored in the new node
//
// Returns:
//      A pointer to the new node
struct node *create_node(int data) {
    
    struct node *new = malloc(sizeof(struct node));
    
    // below line is a shortcut of (*new).data = data;
    new->data = data;
    new->next = NULL;
    return new;
}

// Inserts a new node at the head of a linked list
//
// Parameters:
//      head: A pointer to the head of the linked list
//      data: The data to be stored in the new node
//
// Returns:
//      A pointer to the new head of the linked list
struct node *insert_head(struct node *head, int data) {
    
    // make a new node
    struct node *new = create_node(data);
    
    // connect current list head
    new->next = head;
    // reassign head
    head = new;

    return head;
}

// Inserts a new node at the tail of a linked list
//
// Parameters:
//      head: A pointer to the head of the linked list
//      data: The data to be stored in the new node
//
// Returns:
//      A pointer to the head of the linked list
struct node *insert_tail(struct node *head, int data) {
    
    // make a new node
    struct node *new = create_node(data);

    // Case 1: empty list
    if (head == NULL) {
        head = new;
        return head;
    }

    // Case 2: 1 or more nodes in list
    // loop to last node - similar to array loops
    struct node *current = head;          // int i = 0
    while (current->next != NULL) {       // while (i < SIZE) {
        // moving along current to next node
        current = current->next;          // i++
    }                                     // }

    // connect last node to new
    current->next = new;

    return head;
}

// Traverses a linked list and prints the data in each node
//
// Parameters:
//      head: A pointer to the head of the linked list
//
// Returns:
//      None
void print_list(struct node *head) {
    // Set current to be the first node in the list
    struct node *current = head;
    
    // Traverse the linked list and print each node 
    // until we reach the end of the list
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("X\n");
}


// Finds the number of nodes in a linked list
//
// Parameters:
//      head: A pointer to the head of the linked list
//
// Returns:
//      The number of nodes in the linked list
int list_length(struct node *head) {

    int num_nodes  = 0;
                                   // similar as doing this loop for an array:
    struct node *current = head;   // int i = 0
    while (current != NULL) {      // while (i < SIZE)
        num_nodes++;               //     num_nodes++
        current = current->next;   //     i ++
    }

    return num_nodes;

    // also we use while (current != NULL) not current->next != NULL
    // because we need to count the last node as well. 
    // if we do while (current->next != NULL), it would return 1 less than the actual list size
}
