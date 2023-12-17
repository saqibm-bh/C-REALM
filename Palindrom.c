#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE], size, found = 0;

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

    int j = size - 1;  // Initialize j to the last index
    for (int i = 0; i < j; ++i, --j) {
        if (arr[i] != arr[j]) {
            found = 1;
            break;
        }
    }

    printf("The array is %s Palindromic\n", found ? "not" : "");

    return 0;
}
