#include<stdio.h>
void quicksort(int *arr, int low, int high) {
    int pivot, i, j, temp;
    if(low < high) {
        pivot = low;
        i = low;
        j = high;
        while(i < j) {
            while(arr[i] <= arr[pivot] && i <= high)
                i++;
            while(arr[j] > arr[pivot] && j >= low)
                j--;
            if(i < j) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        temp = arr[j];
        arr[j] = arr[pivot];
        arr[pivot] = temp;
        quicksort(arr, low, j-1);
        quicksort(arr, j+1, high);
    }
}

void main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the unsorted array: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    quicksort(arr, 0, n-1);
    printf("Sorted array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}