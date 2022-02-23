#include <stdio.h>
#include <math.h> 
void input(int *x1, int *y1, int *x2, int *y2)
{
    printf("Enter the values of First point\n");
    scanf("%d%d", x1, y1);
    printf("Enter the values of Second point\n");
    scanf("%d%d", x2, y2);
}
float distance(int *x1, int *y1, int *x2, int *y2)
{
    float dis = 0.0;
    dis = sqrt(((*x2 - *x1) * (*x2 - *x1)) + ((*y2 - *y1) * (*y2 - *y1)));
    return dis;
}
void output(int *x1, int *y1, int *x2, int *y2, float dist)
{
    printf("The distance between point1(%d,%d) and point2(%d,%d) is %f\n", *x1, *y1, *x2, *y2, dist);
}
int main()
{
    int x1, y1, x2, y2;
    float Distance;
    input(&x1, &y1, &x2, &y2);
    Distance = distance(&x1, &y1, &x2, &y2);
    output(&x1, &y1, &x2, &y2, Distance);
    return 0;
}