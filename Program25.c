//Program to add 2 distances (in inches and feet) using structures
#include <stdio.h>
struct Distance {
    int feet;
    int inches;
};
struct Distance addDistances (struct Distance d1, struct Distance d2) {
    struct Distance result;
    result.inches = d1.inches + d2.inches;
    result.feet = d1.feet + d2.feet + (result.inches / 12);
    result.inches %= 12;
    return result;
} 
int main () {
    struct Distance d1, d2, sum;
    printf("Enter the first distance: \n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%d", &d1.inches);
    printf("\nEnter the second distance: \n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%d", &d2.inches);
    sum = addDistances(d1, d2);
    printf("\nSum of distances = %d feet %d inches\n",sum.feet,sum.inches);
    return 0;
}