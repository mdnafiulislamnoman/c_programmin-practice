#include<stdio.h>

int main (){
float area_of_circle;
int volume_of_cylinder;
float pi = 3.1416;
int radius;
int height;

printf("Enter radius of a circle:");
scanf("%d",& radius);

printf("Enter the height of the cylinder:");
scanf("%d",& height);

area_of_circle = pi * radius * radius;

volume_of_cylinder = pi * radius * radius * height;

printf("Area of the circle is: %.2f \n", area_of_circle);

printf("Volume of the cylinder is: %d", volume_of_cylinder);

return 0;

}