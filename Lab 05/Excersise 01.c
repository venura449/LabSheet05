/*This code take user angles as user inputs then display weather it is a traingle 
 or not */


#include <stdio.h>
    // Assigning Variable in a structure
struct traingle {
    float angle1;
    float angle2;
    float angle3;
    };
int main()
{   //taking values from user input
    struct traingle tr1;
    printf("Enter the first Angle : ");
    scanf("%f",&tr1.angle1);
    printf("Enter the first Angle : ");
    scanf("%f",&tr1.angle2);
    printf("Enter the first Angle : ");
    scanf("%f",&tr1.angle3);

    //condition
    if(tr1.angle1+tr1.angle2+tr1.angle3==180){
        printf("\n This is a traingle");
    }
    else{
        printf("\nThis is not a traingle");
    }

}