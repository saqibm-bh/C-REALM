#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[7] = {1, 3, 5, 7, 8, 9, 10};
    int size, targetSum, found = 0;

    printf("Array is: {");
    for (int i = 0; i < 7; ++i) {
        printf("%d,", arr[i]);
    }
    printf("}\n");

    printf("Enter the size of the array within 0 - 100 range: ");
    scanf("%d", &size);

    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &targetSum);

    printf("Pairs with sum %d:\n", targetSum);

    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] + arr[j] == targetSum) {
                printf("(%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("No pair found with the given sum.\n");
    }

    return 0;
}
