#include <stdio.h>

int main(){
    //Assigning the variables
    float length;
    float width;
    char input;
    float area;

    //this line take user inputs
    printf("Enter the first character of the shape (R, T, C) : ");
    scanf("%c",&input);

    //this line catagorize according to the conditions
    if(input=='R'||input=='T'||input=='C'){
    if(input=='R'){
        //rectangle
        printf("\nEnter the length of the rectangle : ");
        scanf("%f",&length);
        printf("\nEnter the width of the rectangle : ");
        scanf("%f",&width);
        area=length*width;
    }
    else if(input=='T'){
        //traingle
        printf("\nEnter the length of the base : ");
        scanf("%f",&length);
        printf("\nEnter the height : ");
        scanf("%f",&width);
        area=((float)1/2)*length*width;
    }
    else if(input=='C'){
        //circle
        printf("\nEnter the Radius : ");
        scanf("%f",&length);
        area=((float)22/7)*length*length;
    }
    //this line prints the area limiting decimals to 2 points
    printf("Area is %.2f",area);
    }
    else{
        //this line prints the invalid state
        printf("Invalid Entry");
    }
   

}