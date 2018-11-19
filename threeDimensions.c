/*///////////////////////////////////////////////////////////////////////
 * Assignment 2 CE4703
 * 
 * threeDimensions.c
 * C file for three dimensional shape calculations
 * Contains all methods for the calculations of surface area and volume of shapes.
 * 
 * Author: Mike Vriesema 17212359
 * Date Last Modified: 19.11.2018
 *///////////////////////////////////////////////////////////////////////
#include <stdlib.h>
#include <stdio.h>
#include "threeDimensions.h"

/*
 * cubeSurfaceArea
 * Calculates total surface area of cube 6*S^2
 * Prints value
 * Return: void
 * Parameter: double- side(value of 1 side)
*/
void cubeSurfaceArea(double side)
{
	double cubeSurfaceArea = (6.0 * (SQUARE(side)));
	printf("\nCube Surface Area = %.2lf\n", cubeSurfaceArea);
}

/*
 * cubeVolume
 * Calculates total volume of cube S^3
 * Prints value
 * Return: void
 * Parameter: double - side(value of 1 side)
*/
void cubeVolume(double side)
{
	double cubeVolume = CUBED(side);
	printf("\nCube Volume = %.2lf\n", cubeVolume);
}

/*
 * rPrismSurfaceArea
 * Calculates total surface area of rectangular prism 2*L*W+2*L*H+2*W*H
 * Prints value
 * Return: void
 * Parameter: double - length(value of length)
 * 			  double - width(value of width)
 * 			  double - height(value of height)
*/
void rPrismSurfaceArea(double length, double width, double height)
{
	double rPrismSurfaceArea = (2.0 * length * width) + (2.0 * length * height) + (2.0 * width * height);
	printf("\nPrism Surface Area = %.2lf\n", rPrismSurfaceArea);
}

/*
 * rPrismVolume
 * Calculates total volume of rectangular prism L*W*H
 * Prints value
 * Return: void
 * Parameter: double - length(value of length)
 * 			  double - width(value of width)
 * 			  double - height(value of height)
*/
void rPrismVolume(double length, double width, double height)
{
	double rPrismVolume = length * width * height;
	printf("\nPrism Volume = %.2lf\n", rPrismVolume);
}

/*
 * sphereSurfaceArea
 * Calculates total surface area of sphere using PI*R^2
 * Prints value
 * Return: void
 * Parameter: double -radius(value of radius)
*/
void sphereSurfaceArea(double radius)
{
	double sphereSurfaceArea = 4.0 * PI * (SQUARE(radius));
	printf("\nSphere Surface Area = %.2lf\n", sphereSurfaceArea);
}

/*
 * sphereVolume
 * Calculates total volume of sphere using 4*PI*R^3 / 3
 * Prints value
 * Return: void
 * Parameter: double -radius(value of radius)
*/
void sphereVolume(double radius)
{
	double sphereVolume = (4.0 * PI * (CUBED(radius)) / 3.0);
	printf("\nSphere Volume = %.2lf\n", sphereVolume);
}

/*
 * cylinderSurfaceArea
 * Calculates total surface area of cylinder using 2*PI*R*H + 2*PI*R^2
 * Prints value
 * Return: void
 * Parameter: double -radius(value of radius)
 * 			  double -height(value of height)
*/
void cylinderSurfaceArea(double radius, double height)
{
	double cylinderSurfaceArea = ((TWOPI * radius * height) + (TWOPI * (SQUARE(radius))));
	printf("\nCylinder Surface Area = %.2lf\n", cylinderSurfaceArea);
}

/*
 * cylinderVolume
 * Calculates total volume of cylinder using H*PI*R^2
 * Prints value
 * Return: void
 * Parameter: double -radius(value of radius)
 * 			  double -height(value of height)
*/
void cylinderVolume(double radius, double height)
{
	double cylinderVolume = (height * PI * (SQUARE(radius)));
	printf("\nCylinder Volume = %.2lf\n", cylinderVolume);
}