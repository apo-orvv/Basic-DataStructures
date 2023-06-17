#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) {
    if (high >= low) {
        int mid = low + (high - low) / 2;
        return (array[mid] == x ? mid : (array[mid] > x ? binarySearch(array, x, low, mid - 1) : binarySearch(array, x, mid + 1, high)));
    }
    return -1;
}

void main() {
    int n,key;
    printf("Enter the total number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the sorted array: ");
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Element to be searched: ");
    scanf("%d", &key);
    printf(binarySearch(arr, key, 0, n - 1) == -1 ? "Element not found!" : "Element found at index %d", binarySearch(arr, key, 0, n - 1));
}