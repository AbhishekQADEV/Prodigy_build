#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int low, int high, int key) {
    if (low > high) {
        return -1;
    }
    
    int mid = (low + high) / 2;
    
    if (arr[mid] == key) {
        return mid;
    }
    
    if (arr[mid] > key) {
        return binarySearch(arr, low, mid - 1, key);
    }
    
    return binarySearch(arr, mid + 1, high, key);
}

int main(int argc, char *argv[]) {
    int arr[] = {3, 9, 4, 8, 7, 6, 1, 2, 0, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = atoi(argv[1]);
    
    int result = binarySearch(arr, 0, size - 1, key);
    
    if (result == -1) {
        printf("Not Found\n");
    } else {
        printf("Found\n");
    }
    
    return 0;
}