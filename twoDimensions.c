/*///////////////////////////////////////////////////////////////////////
 * Assignment 2 CE4703
 * 
 * twoDimensions.c
 * C file for two dimensional shape calculations
 * 
 * Author: Mike Vriesema 17212359
 * Date Last Modified: 19.11.2018
 *///////////////////////////////////////////////////////////////////////
#include <stdlib.h>
#include <stdio.h>
#include "twoDimensions.h"

/*
 * squareArea
 * Calculates total surface area of square using S^2
 * Prints value
 * Return: void
 * Parameter: double - side(value of side)
*/
void squareArea(double side)
{
	double squareArea = SQUARE(side);
	printf("\nSquare Area = %.2lf\n", squareArea);
}

/*
 * squarePerimeter
 * Calculates total perimeter of square using 4*S
 * Prints value
 * Return: void
 * Parameter: double - side(value of side)
*/
void squarePerimeter(double side)
{
	double squarePerimeter = 4 * side;
	printf("\nSquare Perimeter = %.2lf\n", squarePerimeter);
}

/*
 * rectangleArea
 * Calculates total surface area of rectangleusing W*L
 * Prints value
 * Return: void
 * Parameter: double - length(value of length)
 * 			  double - width(value of width)
*/
void rectangleArea(double width, double length)
{
	double rectangleArea = width * length;
	printf("\nRectangle Area = %.2lf\n", rectangleArea);
}

/*
 * rectanglePerimeter
 * Calculates total perimeter of rectangle using 2L + 2W
 * Prints value
 * Return: void
 * Parameter: double - length(value of length)
 * 			  double - width(value of width)
*/
void rectanglePerimeter(double width, double length)
{
	double rectanglePerimeter = ((2.0 * width) + (2.0 * length));
	printf("\nRectangle Perimeter = %.2lf\n", rectanglePerimeter);
}

/*
 * circleArea
 * Calculates total surface area of circle using PI*R^2
 * Prints value
 * Return: void
 * Parameter: double - radius(value of radius)
*/
void circleArea(double radius)
{
	double circleArea = (PI * (SQUARE(radius)));
	printf("\nCircle Area = %.2lf\n", circleArea);
}

/*
 * circleCircumference
 * Calculates total circumference of circle using 2*PI*R
 * Prints value
 * Return: void
 * Parameter: double - radius(value of radius)
*/
void circleCircumference(double radius)
{
	double circleCircumference = (TWOPI * radius);
	printf("\nCircle Circumference = %.2lf\n", circleCircumference);
}

/*
 * triangleArea
 * Calculates total surface area of triangle using B*H / 2 
 * Prints value
 * Return: void
 * Parameter: double - base(value of base)
 * 			  double - height(value of height)
*/
void triangleArea(double base, double height)
{
	double triangleArea = ((base * height) / 2.0);
	printf("\nTriangle Area = %.2lf\n", triangleArea);
}

/*
 * trianglePerimeter
 * Calculates total perimeter of triangle using S1+S2+S3
 * Prints value
 * Return: void
 * Parameter: double - sideA(value of first side)
 * 			  double - sideB(value of second side)
 * 			  double - sideC(value of third side)
*/
void trianglePerimeter(double sideA, double sideB, double sideC)
{
	double trianglePerimeter = (sideA + sideB + sideC);
	printf("\nTriangle Perimeter = %.2lf\n", trianglePerimeter);
}

/*
 * paralellogramArea
 * Calculates total surface area of paralellogram using B*H
 * Prints value
 * Return: void
 * Parameter: double - base(value of base)
 * 			  double - height(value of height)
*/
void parallelogramArea(double base, double height)
{
	double parallelogramArea = (base * height);
	printf("\nParallelogram Area = %.2lf\n", parallelogramArea);
}

/*
 * parallelogramPerimeter
 * Calculates total surface area of paralellogram using 2*B + 2*S
 * Prints value
 * Return: void
 * Parameter: double - base(value of base)
 * 			  double - sideA(value of a side)
*/
void parallelogramPerimeter(double base, double sideA)
{
	double parallelogramPerimeter = ((2.0 * sideA) + (2.0 * base));
	printf("\nParallelogram Perimeter = %.2lf\n", parallelogramPerimeter);
}