#include <stdio.h>
float a, b;

float circle_area(){
float pi = 3.141592653;
printf("Type the circle radius\n");
scanf("%f", &b);
a = b*b*pi;
return a;
}

float rectangle_area() { 
printf("Type the rectangle base\n");
scanf("%f", &a);
printf("And now type the height\n");
scanf("%f", &b);
return a*b;
}

float square_area(){
printf("Type the height of a square side\n");
scanf("%f", &a);
return a*a;
}

float triangle_area(){
printf("Type the triangle base\n");
scanf("%f", &a);
printf("And now type the height\n");
scanf("%f", &b);
float c;
c = a*b/2;
return c;
}
