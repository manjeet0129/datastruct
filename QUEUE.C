#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

void enqueue(int item) {
    if (rear == MAX_SIZE - 1) {
	printf("Queue overflow\n");
	return;
    }
    if (front == -1) {
	front = 0;
    }
    rear = (rear + 1) % MAX_SIZE;
    queue[rear] = item;
    printf("%d enqueued to the queue.\n", item);
}

int dequeue() {
int item=queue[front];
    if (front == -1) {
	printf("Queue underflow\n");
	return -1;
    }
//    int item = queue[front];
    if (front == rear) {
	front = rear = -1;
    } else {
	front = (front + 1) % MAX_SIZE;
    }
    return item;
}

void display() {
    int i;
    if (front == -1) {
	printf("Queue is empty\n");
	return;
    }
//    int i; // Declare 'i' here
    printf("Queue elements: ");
    for (i = front; i != rear; i = (i + 1) % MAX_SIZE) {
	printf("%d ", queue[i]);
    }
    printf("%d\n", queue[rear]);  // To print the last element
}

int main() {
    int choice, item;
    clrscr();
    while (1) {
	printf("\nQueue Operations:\n");
	printf("1. Enqueue\n");
	printf("2. Dequeue\n");
	printf("3. Display\n");
	printf("4. Exit\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);
	switch (choice) {
	    case 1:
		printf("Enter the item to enqueue: ");
		scanf("%d", &item);
		enqueue(item);
		break;
	    case 2:
		item = dequeue();
		if (item != -1) {
		    printf("%d dequeued from the queue.\n", item);
		}
		break;
	    case 3:
		display();
		break;
	    case 4:
		exit(0);
	    default:
		printf("Invalid choice\n");
	}
    }
    getch();
    return 0;
}
