# include <stdio.h>
# include <math.h>
#define PI 3.14159
// fracturing.c
// Author: Darin Hinshaw
// Date: 9/8/2024
// Class: COP 3223 
// Purpose: Set up input responses for users to share two points
//          and find the Distance, Perimeter, Area, Width, and
//          Height of the two points inputed.
// Input: User's two chosen points - (x1,y1) and (x2,y2)
// Output: The Distance, Perimeter, Area, Width, and
//          Height of those two points inputted


// Function for finding the Distance between points
int calculateDistance()
{
    int x1, x2, y1, y2;
    double dist;

//  Asking for Point #1
    printf("Enter Point #1: \n");
    printf("x1 = ");
    scanf(" %d", &x1);
    printf("y1 = ");
    scanf(" %d", &y1);
//  Asking for Point #2
    printf("Enter Point #2: \n");
    printf("x2 = ");
    scanf(" %d", &x2);
    printf("y2 = ");
    scanf(" %d", &y2);

//  Calculates the distance between the points and prints it
    dist = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));

    printf("The distance between the two points is %.2lf.\n", sqrt(dist));
    //A double representing the distance.
    return dist;
}

// Function for finding the Perimeter of the circle between two points
int calculatePerimeter()
{
    int x1, x2, y1, y2;
    double dist, radius, peri, effort;

//  Asking for Point #1
    printf("Enter Point #1: \n");
    printf("x1 = ");
    scanf(" %d", &x1);
    printf("y1 = ");
    scanf(" %d", &y1);

//  Asking for Point #2
    printf("Enter Point #2: \n");
    printf("x2 = ");
    scanf(" %d", &x2);
    printf("y2 = ");
    scanf(" %d", &y2);

//  Calculates the distance, finds the radius, and calculates the perimeter, then prints it
    dist = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    radius = (dist)/2;
    peri = (2*PI*radius);

    printf("The perimeter of the circle is %.2lf.\n", peri);
    //Score for how easy/hard this function was to make
    effort = 3.0;
    return effort;
}

//Function for finding the Area of the circle between two points
int calculateArea()
{
    int x1, x2, y1, y2;
    double dist, radius, area, effort;

//  Asking for Point #1
    printf("Enter Point #1: \n");
    printf("x1 = ");
    scanf(" %d", &x1);
    printf("y1 = ");
    scanf(" %d", &y1);

//  Asking for Point #2
    printf("Enter Point #2: \n");
    printf("x2 = ");
    scanf(" %d", &x2);
    printf("y2 = ");
    scanf(" %d", &y2);

//  Calculates the distance, finds the radius, and calculates the area, then prints it
    dist = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    radius = (dist)/2;
    area = (PI*(radius*radius));

    printf("The area of the circle is %.2lf. \n", area);
    //Score for how easy/hard this function was to make
    effort = 2.0;
    return effort;
}

//Function for finding the Width of the circle between two points
int calculateWidth()
{   
    int x1, x2, y1, y2;
    double width, effort;

    //  Asking for Point #1
    printf("Enter Point #1: \n");
    printf("x1 = ");
    scanf(" %d", &x1);
    printf("y1 = ");
    scanf(" %d", &y1);

//  Asking for Point #2
    printf("Enter Point #2: \n");
    printf("x2 = ");
    scanf(" %d", &x2);
    printf("y2 = ");
    scanf(" %d", &y2);

//  Calculates the width between the points and prints it
    width = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));

    printf("The width of the circle is %.2lf.\n", sqrt(width));
    //Score for how easy/hard this function was to make
    effort = 1.5;
    return effort;
}

//Function for finding the Height of the circle between two points
int calculateHeight()
{
    int x1, x2, y1, y2;
    double height, effort;

//  Asking for Point #1
    printf("Enter Point #1: \n");
    printf("x1 = ");
    scanf(" %d", &x1);
    printf("y1 = ");
    scanf(" %d", &y1);

//  Asking for Point #2
    printf("Enter Point #2: \n");
    printf("x2 = ");
    scanf(" %d", &x2);
    printf("y2 = ");
    scanf(" %d", &y2);

//  Calculates the height between the points and prints it
    height = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));

    printf("The height of the circle is %.2lf.\n", sqrt(height));
    //Score for how easy/hard this function was to make
    effort = 1.0;
    return effort;
}


int main(void)
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}