#include <stdio.h>
void main() {
    int a = 100;
    int *ptr = &a;

    printf("Initial address of ptr: %p\n", (void *)ptr);

    ptr = ptr + 2;  

    printf("Updated address of ptr: %p\n", (void *)ptr);
}
