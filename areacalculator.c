#include <stdio.h>
#include <stdlib.h>
int menu();
int squareArea();
int triangleArea();
int circleArea();
int rectangleArea();
void eclipseArea();
float c, m, q;
int trapezoidArea();
int main() {
    while(1){
        switch(menu()) {
            case 1:
                squareArea();
                break;
            case 2:
                triangleArea();
                break;
            case 3:
                circleArea();
                break;
            case 4:
                rectangleArea();
                break;
            case 5:
                eclipseArea();
                break;
            case 6:
                trapezoidArea();
                break;
            case 7:
                printf("\n Thank You \n");
                exit(0);
                break;
            default:
                printf(" \n Invalid input \n");
                exit(0);
                break;
           
        }
    }
   
   

    return 0;
}

int menu() {
    int choice;
    printf("\n Welcome to Area Calculator ");
    printf("\n ----------------------------");
    printf("\n 1. Calculate Area of Square: ");
    printf("\n 2. Calculate Area of Triangle: ");
    printf("\n 3. Calculate Area of Circle: ");
    printf("\n 4. Calculate Area of Rectangle: ");
    printf("\n 5. Calculate Area of Eclipse: ");
    printf("\n 6. Calculate Area of Trapezoid: ");
    printf("\n 7. Exit: ");
    printf("\n Enter your choice: ");
    scanf("%d", &choice);
    return (choice);
}

int squareArea() {
    float a;
    printf("\n Enter side of the square: ");
    scanf("%f", &a);
    float squareArea = a*a;
    printf("\n The area of the square is: %f \n", squareArea);
    return (a);
    return (squareArea);
}

int triangleArea() {
    float b, h;
    printf("\n Enter base of the triangle: ");
    scanf("%f", &b);
    printf("\n Enter height of the triangle: ");
    scanf("%f", &h);
    float triangleArea = 0.5*b*h;
    printf("\n The area of the triangle is: %f \n", triangleArea);
    return (b);
    return (h);
    return (triangleArea);
}

int circleArea() {
    float r;
    printf("\n Enter radius of the circle: ");
    scanf("%f", &r);
    float circleArea = 3.14*r*r;
    printf("\n The area of the circle is: %f \n", circleArea);
    return (r);
    return (circleArea);
}

int rectangleArea() {
    float y, z;
    printf("\n Enter base of the rectangle: ");
    scanf("%f", &y);
    printf("\n Enter height of the rectangle: ");
    scanf("%f", &z);
    float rectangleArea = z*y;
    printf("\n The area of the rectanlge is: %f \n", rectangleArea);
    return (y);
    return (z);
    return (rectangleArea);
   
}

void eclipseArea() {
    printf("\n Enter length of semi-major axis: ");
    scanf("%f", &c);
    printf("\n Enter length of semi-minor axis: ");
    scanf("%f", &m);
    q = 3.14*c*m;
    printf("\n The area of the eclipse is: %f \n", q);
   
}

int trapezoidArea() {
    float j,k,l;
    printf("\n Enter value of parallel side: ");
    scanf("%f", &j);
    printf("\n Enter value of other parallel side: ");
    scanf("%f",&k);
    printf("\n Enter height of the trapezoid: ");
    scanf("%f", &l);
    float trapezoidArea = ((j+k)/2)*l;
    printf("\n The area of trapezoid is: %f \n", trapezoidArea);
    return(j);
    return(k);
    return(l);
    return(trapezoidArea);
}
