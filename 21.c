#include <stdio.h>
int main() {
    int arr[5];
    printf("Enter 5 numbers:\n");

    for(int i=0; i<5; i++) {
        scanf("%d", &arr[i]);   // input
    }

    printf("You entered:\n");
    for(int i=0; i<5; i++) {
        printf("%d ", arr[i]);  // output
    }

    return 0;
}
