/*///////////////////////////////////////////////////////////////////////
 * Assignment 2 CE4703
 * 
 * twoDimensions.h
 * Header file for two dimensional shape calculations.
 * Contains function declarations for area/perimeter methods.
 * 
 * Author: Mike Vriesema 17212359
 * Date Last Modified: 19.11.2018
 *///////////////////////////////////////////////////////////////////////

#ifndef TWODIMENSIONS_H
#define TWODIMENSIONS_H

/** 
 * Define PI value as 3.14
 * Define TWOPI as 3.14*2
 * Define square function to carry out squared calculation
 * Define cubed function to carry out cubed calculation
 */
#define PI 3.1415926
#define TWOPI (PI*PI)
#define SQUARE(a) (a*a)
#define CUBED(a) (a*a*a)

/**
 * Function Declarations: (IN DEPTH COMMENTS IN twoDimensions.c FILE)
 * squareArea takes in double side and has no return
 * squarePerimeter takes in double side and has no return
 * rectangleArea takes in double width,double length and has no return
 * rectanglePerimeter takes in double width,double length and has no return
 * circleArea takes in double radius and has no return
 * circleCircumference takes in double radius and has no return
 * triangleArea takes in double base, double height and has no return
 * trianglePerimeter takes in double sideA,double sideB,double sideC and has no return
 * parallelogramArea takes in double base, double height and has no return
 * parallelogramPerimeter takes in double base, double sideA and has no return
 */
void squareArea(double side);
void squarePerimeter(double side);
void rectangleArea(double width, double length);
void rectanglePerimeter(double width, double length);
void circleArea(double radius);
void circleCircumference(double radius);
void triangleArea(double base, double height);
void trianglePerimeter(double sideA, double sideB, double sideC);
void parallelogramArea(double base, double height);
void parallelogramPerimeter(double base, double sideA);

#endif
