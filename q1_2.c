#include <stdio.h>

void circle(float r){

    printf("Area of circle is:%f\n", 3.14 * r * r);

    printf("perimeter of circle is:%f\n\n\n", 3.14 * r * 2);

    return;

}

void triangle(float s1, float s2, float s3, float h, float b){

    printf("Area of triangle is:%f\n", 0.5 * h * b);

    printf("Perimeter of triangle is:%f\n\n\n", s1 + s2 + s3);

    return;

}

void rectangle(float l, float b){

    printf("Area of rectangle is:%f\n", l * b);

    printf("Perimeter of rectangle is:%f\n\n\n", l + b + l + b);

    return;

}

int main(){

    float radius;

    printf("           CIRCLE        \n\n");

    printf("Enter radius of circle : ");

    scanf("%f",&radius);

    circle(radius);



    float a, b, c, d, e;

    printf("          TRIANGLE         \n\n");

    printf("Enter 1st side of triangle : ");

    scanf("%f", &a);

    printf("Enter 2nd side of triangle : ");

    scanf("%f", &b);

    printf("Enter 3rd side of triangle : ");

    scanf("%f", &c);

    printf("Enter height of triangle : ");

    scanf("%f", &d);

    printf("Enter base of triangle : ");

    scanf("%f", &e);

    triangle(a, b, c, d, e);



    float f, g;

    printf("          RECTANGLE         \n\n");

    printf("Enter length of rectangle : ");

    scanf("%f", &f);

    printf("Enter bredth of rectangle : ");

    scanf("%f", &g);

    rectangle(f, g);



    return 0;

}
