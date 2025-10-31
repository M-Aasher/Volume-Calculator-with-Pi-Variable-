/*
Program: Volume Calculator (with Pi Variable)
Author: Aasher
Description: This program calculates the volume of a Cube, Cylinder, or Sphere using conditional statements and a pi variable for better readability.
Date: 31/10/2025
*/
 
 
#include <stdio.h>

int main()
{
int choice;
float volume;
float pi = 3.1416;
printf("Enter the shape of which you want to find the volume \n");
printf("1.Cube \n 2.Cylinder \n 3.Sphere \n");
scanf("%d", &choice);

if(choice==1){
    float length;
      printf("Enter length:");
      scanf("%f",&length);
    volume = length * length * length;
      printf("The volume of cube is %.2f \n", volume);
}
else if(choice==2){
    float length1, radius;
      printf("Enter the length:");
      scanf("%f", &length1);
      printf("Enter the radius:");
      scanf("%f", &radius);
    volume = pi * length1 * radius * radius;
      printf("The volume of cylinder is %.2f \n", volume);
}
else if(choice==3){
    float radius1;
      printf("Enter the radius:");
      scanf("%f", &radius1);
    volume = (4.0 / 3.0) * pi * radius1 * radius1 * radius1;
      printf("The volume of sphere is %.2f", volume);
    
}
else
printf("INVALID CHOICE \n");

return 0;
}
