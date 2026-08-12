#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

struct node {
    struct node *next;
    int          data;
};

struct node *insert_highest(struct node *head, int value);
struct node *strings_to_list(int len, char *strings[]);

// DO NOT CHANGE THIS MAIN FUNCTION
int main(int argc, char *argv[]) {
    // create linked list from command line arguments
    struct node *head = strings_to_list(argc - 1, &argv[1]);

    head = insert_highest(head, 1000);

    struct node *curr = head;
    while (curr != NULL) {
        printf("%d ", curr->data);
        curr = curr->next;
    }    
    printf("\n");

    return 0;
}

// Identify the first instance of the largest node in the Linked List
// Insert the provided number immediately after this node.
struct node *insert_highest(struct node *head, int value) {

    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = value;
    new_node->next = NULL;

    if (head == NULL) {
        return new_node;
    }

    struct node *curr = head;
    int largest = head->data;

    while (curr != NULL) {
        if (curr->data > largest) {
            largest = curr->data;
        }
        curr = curr->next;
    }

    curr = head;
    while (curr != NULL && curr->data != largest) {
        curr = curr->next;
    }

    new_node->next = curr->next;
    curr->next = new_node;


    return head;
}


// DO NOT CHANGE THIS FUNCTION
// create linked list from array of strings
struct node *strings_to_list(int len, char *strings[]) {
    struct node *head = NULL;
    for (int i = len - 1; i >= 0; i = i - 1) {
        struct node *n = malloc(sizeof (struct node));
        assert(n != NULL);
        n->next = head;
        n->data = atoi(strings[i]);
        head = n;
    }
    return head;
}
