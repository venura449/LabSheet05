#include <stdio.h>

// Function Declarations
void pkg01(int numPeople);
void pkg02(int numPeople);
void pkg03(int numPeople);

int main() {
    int input;
    int numPeople;

    printf("Enter the Package Type Number: ");
    scanf("%d", &input);
    printf("Enter Number of People: ");
    scanf("%d", &numPeople);

    switch (input) {
        case 1:
            pkg01(numPeople);
            break;
        case 2:
            pkg02(numPeople);
            break;
        case 3:
            pkg03(numPeople);
            break;
    }

    return 0;
}

// Function Definitions
void pkg01(int numPeople) {
    printf("Horse Riding\n");
    printf("%d\n", numPeople * 2000);
}

void pkg02(int numPeople) {
    printf("Scuba Diving\n");
    printf("%d\n", numPeople * 5000);
}

void pkg03(int numPeople) {
    printf("Water Rafting\n");
    printf("%d\n", numPeople * 7000);
}
