#include<stdio.h>
void main()
{
float h,m;
float hit_ratio;
printf("enter the number of hits:");
scanf("%f",&h);
printf("enter the number of miss:");
scanf("%f",&m);
hit_ratio=h/(h+m);
printf("hit_ratio=%f",hit_ratio);
}
