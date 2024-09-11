#include <stdio.h>
#include <math.h>


typedef struct Point
{
    int x;
    int y;
} Point;


/**
 * @brief Calculates the distance between two points
 *
 */
double dist(Point p1, Point p2)
{
    return sqrt( pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2) );
}

int main()
{
    Point p1;
    p1.x = 5;
    p1.y = 5;

    // designated initializer syntax
    Point p2 = { .x = 10, .y = 10 };


    double distance = dist(p1, p2);
    printf("The distance between the two points: %.2lf\n", distance);


    return 0;
}