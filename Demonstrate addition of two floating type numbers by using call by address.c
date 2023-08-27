#include <stdio.h>

void addFloats(float *num1, float *num2, float *result) {
    *result = *num1 + *num2;
}

void main() {
    float num1, num2, result;

    printf("Enter the first float number: ");
    scanf("%f", &num1);

    printf("Enter the second float number: ");
    scanf("%f", &num2);

    addFloats(&num1, &num2, &result);

    printf("Sum of %.2f and %.2f is %.2f\n", num1, num2, result);

}
