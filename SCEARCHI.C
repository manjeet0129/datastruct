//scearch
#include <stdio.h>
#include <conio.h>
void main() {
    int array[100], i, n, value, found = 0;
    clrscr();
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements: \n");
    for(i = 0; i < n; i++) {
	scanf("%d", &array[i]);
    }
    printf("Enter the value to be searched: ");
    scanf("%d", &value);
    for(i = 0; i < n; i++) {
	if(array[i] == value) {
	    printf("Value found at %d\n", i);
	    found = 1;
	    break;
	}
    }
    if(!found) {
	printf("Value not found \n");
    }
    getch();
}
