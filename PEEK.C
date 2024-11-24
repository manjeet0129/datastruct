#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#define MAX_SIZE 100
int stack[MAX_SIZE];
int top = -1;
void push(int element) {
if (top >= MAX_SIZE - 1) {
printf("Stack overflow\n");
return;
}
stack[++top] = element;
}
int pop() {
int poppedElement=stack[top--];
if (top == -1) {
printf("Stack underflow\n");
return-1;
}
//int poppedElement = stack[top--];
return poppedElement;
}
int peek() {
if (top == -1) {
printf("Stack is empty\n");
return -1;
} return stack[top];
}
int main() {
int topElement=peek();
clrscr();
push(10);
push(20);
push(30);
//int topElement = peek();
printf("Top element: %d\n", topElement);
getch();
return 0;
}