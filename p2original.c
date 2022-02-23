#include<stdio.h>
#include<math.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("enter the coordinates of 1st point\n");
  scanf("%f%f",x1,y1);
  printf("enter the coordinates of 2nd point\n");
  scanf("%f%f",x2,y2);
  printf("enter the coordinates of 3rd point\n");
  scanf("%f%f",x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
 float dis = 0.0,dis1=0.0,dis2=0.0;
    dis = sqrt(((*x2 - *x1) * (*x2 - *x1)) + ((*y2 - *y1) * (*y2 - *y1)));
   dis1 = sqrt(((*x3 - *x2) * (*x3 - *x2)) + ((*y3 - *y2) * (*y3 - *y2)));
   dis2 = sqrt(((*x2 - *x1) * (*x2 - *x1)) + ((*y2 - *y1) * (*y3 - *y1)));
}

