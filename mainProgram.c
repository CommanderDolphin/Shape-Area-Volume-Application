/*///////////////////////////////////////////////////////////////////////
 * Assignment 2 CE4703
 * 
 * Modular Program that runs shape related size calculations for
 * 3D and 2D shapes with a menu loop in the main allowing for user input.
 * 
 * Author: Mike Vriesema 17212359
 * Date Last Modified: 19.11.2018
 *///////////////////////////////////////////////////////////////////////

#include <stdlib.h>
#include <stdio.h>
#include "twoDimensions.h"
#include "threeDimensions.h"

//FUNCTION DECLARATIONS:
int readChoice();
double readInput();

/*
 * The main 
*/
int main()
{
     int choice,twoD_Choice,threeD_Choice; //DECLARES INT CHOICE VARIABLES USED IN MENU NAVIAGTION
     double input1,input2,input3,input4,input5; //DECLARES EMPTY DOUBLE VALUES USED IN SHAPE METHOD CALLS
    do { //MAIN MENU LOOP
        printf("\nMAIN MENU:\n\nPress 1 to use 2D shapes\n"); //2D OPTION
        printf("Press 2 to use 3D shapes\n"); //3D OPTION
        printf("Press 3 to exit the program\n"); //EXIT PROGRAM OPTION
        printf("Enter your choice: "); 
        choice = readChoice();  //CALLS READ INPUT METHOD
        switch (choice) {  

        case 1: { //2D BRANCH
        do {
            printf("\n2D-SHAPES MENU:\n\nPress 1 to select square\n"); //SQAURE OPTION
            printf("Press 2 to select rectangle\n"); //RECTANGLE OPTION
            printf("Press 3 to select circle\n"); //CIRCLE OPTION
            printf("Press 4 to select triangle\n"); //CIRCLE OPTION
            printf("Press 5 to select parallelogram\n"); //PARALLELOGRAM OPTION
            printf("Press 6 to return to main menu\n"); //BACK OPTION
            printf("Enter your choice: "); 
            twoD_Choice = readChoice(); //CALLS READ INPUT METHOD
            switch (twoD_Choice){
            
                case 1: { //SQUARE SUB MENU
                    printf("\n\nEnter a value for the side of the square: ");
                    input1=readInput();
                    squareArea(input1); //CALLS METHOD FOR AREA
                    squarePerimeter(input1); //CALLS METHOD FOR PERIMETER
                    break;
                }
                case 2: { //RECTANGLE SUB MENU
                    printf("\n\nEnter a value for the width of the rectangle: ");
                    input1=readInput();
                    printf("\n\nEnter a value for the length of the rectangle: ");
                    input2=readInput();
                    rectangleArea(input1,input2); //CALLS METHOD FOR AREA
                    rectanglePerimeter(input1,input2); //CALLS METHOD FOR PERIMETER
                    break;
                }
                case 3: { //CIRCLE SUB MENU
                    printf("\n\nEnter a value for the radius of the circle: ");
                    input1=readInput();
                    circleArea(input1); //CALLS METHOD FOR AREA
                    circleCircumference(input1); //CALLS METHOD FOR CIRCUMFERENCE
                    break;
                }
                case 4: { //TRIANGLE SUB MENU
                    printf("Enter 1st value for the side of the triangle: ");
                    input1=readInput();
                    printf("Enter 2nd value for the side of the triangle: ");
                    input2=readInput();
                    printf("Enter 3rd value for the side of the triangle: ");
                    input3=readInput();
                    printf("Enter value for the base of the triangle: ");
                    input4=readInput();
                    printf("Enter value for the height of the triangle: ");
                    input5=readInput();
                    triangleArea(input4,input5); //CALLS METHOD FOR AREA
                    trianglePerimeter(input1,input2,input3); //CALLS METHOD FOR PERIMETER
                    break;
                }
                case 5: { //PARALLELOGRAM SUB MENU
                    printf("\n\nEnter a value for the base of the parallelogram: ");
                    input1=readInput();
                    printf("\n\nEnter a value for the height of the parallelogram: ");
                    input2=readInput();
                    printf("\n\nEnter a value for the side of the parallelogram: ");
                    input3=readInput();
                    parallelogramArea(input1,input2); //CALLS METHOD FOR AREA
                    parallelogramPerimeter(input1,input3); //CALLS METHOD FOR PERIMETER
                    break;
                }
                case 6 : { //BACK OPTION
                    choice = -1;
                    break;
                }
                default: //DEFAULT TO AVOID INCORRECT INPUT WILL EXIT PROGRAM
                    printf("No valid input detected\nExiting program\n"); 
                    choice = -1;
                    break;
                } 
            break; 
            }while(choice == 1);
            break;
        } 
        case 2: { //3D BRANCH
        do {
            printf("3D SHAPES MENU:\n\nPress 1 to select cube\n"); //CUBE OPTION
            printf("Press 2 to select prism\n"); //PRISM OPTION
            printf("Press 3 to select sphere\n"); //SPHERE OPTION
            printf("Press 4 to select cylinder\n"); //CYLINDER OPTION
            printf("Press 5 to return to main menu\n"); //BACK OPTION
            printf("Enter your choice: "); 
            threeD_Choice = readChoice(); //CALLS READ INPUT METHOD
            switch (threeD_Choice){
            
                case 1: { //CUBE SUB MENU
                    printf("\n\nEnter a value for the side of the cube: ");
                    input1=readInput();
                    cubeSurfaceArea(input1); //CALLS METHOD FOR AREA
                    cubeVolume(input1); //CALLS METHOD FOR VOLUME
                    break;
                }
                case 2: { //PRISM SUB MENU
                    printf("\n\nEnter a value for the length of the prism: ");
                    input1=readInput();
                    printf("\n\nEnter a value for the width of the prism: ");
                    input2=readInput();
                    printf("\n\nEnter a value for the height of the prism: ");
                    input3=readInput();
                    rPrismSurfaceArea(input1,input2,input3); //CALLS METHOD FOR AREA
                    rPrismVolume(input1,input2,input3); //CALLS METHOD FOR VOLUME
                    break;
                }
                case 3: { //SPHERE SUB MENU
                    printf("\n\nEnter a value for the radius of the sphere: ");
                    input1=readInput();
                    sphereSurfaceArea(input1); //CALLS METHOD FOR AREA
                    sphereVolume(input1); //CALLS METHOD FOR VOLUME
                    break;
                }
                case 4: { //CYLINDER SUB MENU
                    printf("\n\nEnter a value for the radius of the cylinder: ");
                    input1=readInput();
                    printf("\n\nEnter a value for the height of the cylinder: ");
                    input2=readInput();
                    cylinderSurfaceArea(input1,input2); //CALLS METHOD FOR AREA
                    cylinderVolume(input1,input2); //CALLS METHOD FOR VOLUME
                    break;
                }
                case 5 : { //BACK OPTION
                    choice = -1;
                    break;
                }
                default: //DEFAULT TO AVOID INCORRECT INPUT WILL EXIT PROGRAM
                    printf("No valid input detected\nExiting program\n"); 
                    choice = -1;
                    break;
            }
        }while(choice == 2);
            break; 

        } 
        case 3: { //EXIT BRANCH
            printf("Exiting Program\n");
            choice = 0;
            break;
        }
        default: //DEFAULT TO AVOID INCORRECT INPUT WILL EXIT PROGRAM
            printf("No valid input detected\nExiting program\n"); 
            choice = 0;
            break;
        } 
    }while(choice != 0);
} 

/*
 * readChoice
 * Reads user input expecting an int
 * Used for making menu choices
 * Return: int - value(user inputted value)
 * Parameter: void
*/
int readChoice()
{
   int value;
   scanf("%d",&value);
   return value;
}

/*
 * readInput
 * Reads user input expecting an double
 * Used for inputting shape dimensions in sub menus
 * Return: double - value(user inputted value)
 * Parameter: void
*/
double readInput()
{
   double value;
   scanf("%lf",&value);
   return value;
}
