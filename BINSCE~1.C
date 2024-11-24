#include <stdio.h>
#include<conio.h>
// Function to perform binary search
int binarySearch(int arr[], int left, int right, int x) {
clrscr();
while (left <= right) {
int mid = left + (right - left) / 2;
// Check if x is present at mid
if (arr[mid] == x)
return mid;
// If x greater, ignore left half
if (arr[mid] < x)
left = mid + 1;
// If x is smaller, ignore right half
else
right = mid - 1;
}
// If element is not present in array
return -1;
}
int main() {
int arr[] = {2, 3, 4, 10, 40};
int n = sizeof(arr) / sizeof(arr[0]);
int x = 10;
int result = binarySearch(arr, 0, n - 1, x);
if (result != -1)
printf("Element is present at index %d\n", result);
else
printf("Element is not present in array\n");
getch();
return 0;
}