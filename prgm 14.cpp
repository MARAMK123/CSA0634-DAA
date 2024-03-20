#include <stdio.h>

void findMinMaxSequence(int arr[], int size) {
    int min = arr[0], max = arr[0];
    printf("Minimum and maximum value sequence for all numbers in the list:\n");
    printf("Number\tMin\tMax\n");
    for (int i = 0; i < size; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
        printf("%d\t%d\t%d\n", arr[i], min, max);
    }
}

int main() {
    int size;
    printf("Enter the number of elements in the list: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findMinMaxSequence(arr, size);

    return 0;
}
