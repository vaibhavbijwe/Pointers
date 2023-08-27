#include <stdio.h>

int main() {
    double myDouble = 50.21;
    int myInt = 56;
    char myChar = 'A';

    double *doublePtr = &myDouble;
    int *intPtr = &myInt;
    char *charPtr = &myChar;

    printf("Address of myDouble: %p, Value: %lf\n", (void *)doublePtr, *doublePtr);
    printf("Address of myInt: %p, Value: %d\n", (void *)intPtr, *intPtr);
    printf("Address of myChar: %p, Value: %c\n", (void *)charPtr, *charPtr);

    return 0;
}
