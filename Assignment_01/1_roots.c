/*1. C program to Find all Roots of a Quadratic equation*/

#include<stdio.h>
#include<math.h> 

void main ()
{
    float a,b,c,r,x1,x2,i,discriminant;
    printf("Enter the value of a\t:\t"); 
    scanf("%f",&a);
    printf("Enter the value of b\t:\t"); 
    scanf("%f",&b);
    printf("Enter the value of c\t:\t"); 
    scanf("%f",&c);
    discriminant =(b*b-4*a*c);

    //for real roots

    if(discriminant>0)
    {
        x1=(-b+ sqrt(discriminant))/(2*a); 
        x2=(-b- sqrt(discriminant))/(2*a); 
        printf("\n\nThe Value of root_1\t:\t%.3f\nThe Value of root_2\t:\t%.3f\n\n",x1,x2); 
    }
    else if (discriminant==0)
    {
        x1=(-b/(2*a));
        printf("\n\nThe Value of root_1\t:\t%.3f\nThe Value of root_2\t:\t%.3f\n\n",x1,x1); 
    }

    //for unreal roots

    else
    {
        r=((-b)/(2*a));
        i = sqrt(-discriminant) / (2 * a);  
        /* (-) is used because outcome of the discriminant will be negative and it has to be converted to positive in order to execute square root on it */
        printf("\n\nThe Value of root_1\t:\t%.3f+%.3fi\nThe Value of root_2\t:\t%.3f-%.3fi\n\n", r,i,r,i);
    }
}