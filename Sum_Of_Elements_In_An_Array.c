#include <stdio.h>

int main() {
    int n, sum = 0;
	printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    int i;
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int *ptr = arr;
    for (i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    printf("Sum of elements in the array: %d\n", sum);
    return 0;
}

