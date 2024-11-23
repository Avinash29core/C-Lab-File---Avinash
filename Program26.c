//Program to add 2 complex numbers using structure
#include <stdio.h>
struct Complex {
    float real;
    float imag;
};
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}
int main () {
    struct Complex c1, c2, sum;
    printf("Enter the first complex number:\n");
    printf("Real part: ");
    scanf("%f", &c1.real);
    printf("Imaginary part: ");
    scanf("%f", &c1.imag);
    printf("\nEnter the second complex number:\n");
    printf("Real part: ");
    scanf("%f", &c2.real);
    printf("Imaginary part: ");
    scanf("%f", &c2.imag);
    sum = addComplex(c1, c2);
    printf("\nSum of complex numbers = %.2f + %.2fi\n",sum.real,sum.imag);
    return 0;
}