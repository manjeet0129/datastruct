//implementaion
#include <stdio.h>
#include <conio.h>
 int main() {
    int a[10], i;
    clrscr();
    for(i = 0; i < 6; i++) {
	printf("Enter number: ");
	scanf("%d", &a[i]);
    }
    for(i = 0; i < 6; i++) {
	printf("Element %d: %d, ", i + 1, a[i]);
    }
    getch();
}
