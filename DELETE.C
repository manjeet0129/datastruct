//deletation
#include <stdio.h>
#include <conio.h>

int main() {
    int n, i, position;
    int array[100];
    printf("Enter size: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
	printf("Enter element %d: ", i + 1);
	scanf("%d", &array[i]);
    }
    printf("Enter position %d ", n);
    scanf("%d", &position);
    if(position < 1 || position > n) {
	printf("Invalid position!\n");
    } else {
	for(i = position - 1; i < n - 1; i++) {
	    array[i] = array[i + 1];
	}
	n--;
	printf("Array after deletion: ");
	for(i = 0; i < n; i++) {
	    printf("%d ", array[i]);
	}
	printf("\n");
    }
    getch();
    return 0;
}