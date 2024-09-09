# include <stdio.h>
# include <math.h>
#define PI 3.14159

int calculateDistance()
{
    int x1, x2, y1, y2;
    double dist;

    printf("Enter Point #1: \n");
    printf("x1 = ");
    scanf(" %d", &x1);
    printf("y1 = ");
    scanf(" %d", &y1);

    printf("Enter Point #2: \n");
    printf("x2 = ");
    scanf(" %d", &x2);
    printf("y2 = ");
    scanf(" %d", &y2);

    dist = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));

    printf("The distance between the two points is %.2lf.\n", sqrt(dist));
    return 0;
}

int calculatePerimeter()
{
    int x1, x2, y1, y2;
    double dist, radius, peri, result;

    printf("Enter Point #1: \n");
    printf("x1 = ");
    scanf(" %d", &x1);
    printf("y1 = ");
    scanf(" %d", &y1);

    printf("Enter Point #2: \n");
    printf("x2 = ");
    scanf(" %d", &x2);
    printf("y2 = ");
    scanf(" %d", &y2);

    dist = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    radius = (dist)/2;
    peri = (2*PI*radius);

    printf("The perimeter of the circle is %.2lf.\n", peri);
    result = 3;
    return result;
}

int calculateArea()
{
    int x1, x2, y1, y2;
    double dist, radius, area, result;

    printf("Enter Point #1: \n");
    printf("x1 = ");
    scanf(" %d", &x1);
    printf("y1 = ");
    scanf(" %d", &y1);

    printf("Enter Point #2: \n");
    printf("x2 = ");
    scanf(" %d", &x2);
    printf("y2 = ");
    scanf(" %d", &y2);

    dist = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    radius = (dist)/2;
    area = (PI*(radius*radius));

    printf("The area of the circle is %.2lf. \n", area);
    result = 2;
    return result;
}

int calculateWidth()
{   
    int x1, x2, y1, y2;
    double width, result;

    printf("Enter Point #1: \n");
    printf("x1 = ");
    scanf(" %d", &x1);
    printf("y1 = ");
    scanf(" %d", &y1);

    printf("Enter Point #2: \n");
    printf("x2 = ");
    scanf(" %d", &x2);
    printf("y2 = ");
    scanf(" %d", &y2);

    width = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));

    printf("The width of the circle is %.2lf.\n", sqrt(width));
    result = 1;
    return result;
}

int calculateHeight()
{
    int x1, x2, y1, y2;
    double height, result;

    printf("Enter Point #1: \n");
    printf("x1 = ");
    scanf(" %d", &x1);
    printf("y1 = ");
    scanf(" %d", &y1);

    printf("Enter Point #2: \n");
    printf("x2 = ");
    scanf(" %d", &x2);
    printf("y2 = ");
    scanf(" %d", &y2);

    height = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));

    printf("The height of the circle is %.2lf.\n", sqrt(height));
    result = 1;
    return result;
}


int main(int argc, char **argv)
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    
    return 0;
}