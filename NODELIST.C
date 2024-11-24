#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct Node {
int data;
struct Node*
next;
};
struct Node* createNode(int new_data)
{
//clrscr();
struct Node* new_node= (struct Node*)malloc(sizeof(struct Node));
//xclrscr();
new_node->data = new_data;
new_node->next = NULL;
return new_node;
}
struct Node* insertAtFront(struct Node* head, int new_data)
{
struct Node* new_node = createNode(new_data);
new_node->next = head;
return new_node;
}
void printList(struct Node* head)
{
struct Node* curr = head;
while (curr != NULL) {
printf(" %d", curr->data);
curr = curr->next;
}
printf("\n");
}
int main()
{
int data = 1;
struct Node* head = createNode(2);
head->next = createNode(3);
head->next->next = createNode(4);
head->next->next->next = createNode(5);
printf("Original Linked List:");
printList(head);
printf("After inserting Nodes at the front:");
head = insertAtFront(head, data);
printList(head);
getch();
return 0;
}