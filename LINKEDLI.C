//linked list
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

int main() {
    // Declare all variables at the beginning
    Node *first, *second, *third, *temp;

    // Memory allocation and initialization
    first = (Node *)malloc(sizeof(Node));
    first->data = 10;

    second = (Node *)malloc(sizeof(Node));
    second->data = 20;

    third = (Node *)malloc(sizeof(Node));
    third->data = 30;

    // Linking the nodes
    first->next = second; // this will create: 10 -> 20
    second->next = third; // this will create: 10 -> 20 -> 30
    third->next = NULL;   // this will create: 10 -> 20 -> 30 -> NULL

    // Print the linked list
    printf("Linked list:");
    temp = first;

    while (temp) {
        printf(" %d", temp->data);
        temp = temp->next;
    }

    getch();   // Wait for a key press before exiting
    clrscr();  // Clear the screen

    return 0;
}
