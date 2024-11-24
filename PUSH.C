//push
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX_SIZE 100
int stack[MAX_SIZE];
int top = -1;
void push(int element) {
if (top >= MAX_SIZE - 1) {
printf("Stack overflow\n");
return;
}
stack[++top] = element;
printf("%d pushed to stack\n", element);
}
int
main() {
clrscr();
push(10);
push(20);
push(30);
getch();
return 0;
}