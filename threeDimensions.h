/*///////////////////////////////////////////////////////////////////////
 * Assignment 2 CE4703
 * 
 * threeDimensions.h
 * Header file for three dimensional shape calculations.
 * Contains function declarations for area/volume methods.
 * 
 * Author: Mike Vriesema 17212359
 * Date Last Modified: 19.11.2018
 *///////////////////////////////////////////////////////////////////////
#ifndef THREEDIMENSIONS_H
#define THREEDIMENSIONS_H

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
 * Function Declarations: (IN DEPTH COMMENTS IN threeDimensions.c FILE)
 * cubeSurfaceArea takes in double side and has no return
 * cubeVolume takes in double side and has no return
 * rPrismSurfaceArea takes in double length,double width,double height and has no return
 * rPrismVolume takes in double length,double width,double height and has no return
 * sphereSurfaceArea takes in double radius and has no return
 * sphereVolume takes in double radius and has no return
 * cylinderSurfaceArea takes in double radius, double height and has no return
 * cylinderVolume takes in double radius,double height and has no return
 */
void cubeSurfaceArea(double side);
void cubeVolume(double side);
void rPrismSurfaceArea(double length, double width, double height);
void rPrismVolume(double length, double width, double height);
void sphereSurfaceArea(double radius);
void sphereVolume(double radius);
void cylinderSurfaceArea(double radius, double height);
void cylinderVolume(double radius, double height);

#endif
