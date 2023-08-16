// this code displays the total and sport event by entering the pkg number
#include <stdio.h>



int main() {
    int input;
    int numPeople;

    printf("Enter the Package Type Number: ");
    scanf("%d", &input);
    printf("Enter Number of People: ");
    scanf("%d", &numPeople);

    switch (input) {
        case 1:
             printf("Horse Riding\n");
             printf("%d\n", numPeople * 2000);
             break;
        case 2:
             printf("Scuba Diving\n");
             printf("%d\n", numPeople * 5000); 
             break;
        case 3:
             printf("Water Rafting\n");
             printf("%d\n", numPeople * 7000);
             break;
    }

    return 0;
}

