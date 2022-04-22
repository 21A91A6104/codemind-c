#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
    float radius,area;
    scanf("%f",&radius);
    area=PI*radius*radius;
    printf("%0.2f
",area);
    return 0;
}