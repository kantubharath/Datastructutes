#include <stdio.h>
#include <stdlib.h>
struct Array {
   int* A;
   int size;
   int length;
};
int main() {
    struct Array arr;
    printf("Enter Size of an Array: ");
    scanf("%d", &arr.size);
    arr.A = (int*)malloc(sizeof(int) * arr.size);
    arr.length = 0;
    printf("Enter Number of Elements: ");
    scanf("%d", &arr.length);
    printf("Enter All Elements: \n");
    for (int i = 0; i < arr.length; i++) {
    scanf("%d", &arr.A[i]);
    }
    getchar();
}

