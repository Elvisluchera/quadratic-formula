#include<stdio.h>
#include<math.h>

int main{

    float a,b,c,numerator,root_1,root_2;
        //the code below is to request the user to input value of the quadratic formula
        printf("Enter the value of a: ");
        scanf("%f",&a);
        printf("Enter the value of b: ");
        scanf("%f",&b);
        printf("Enter the value of c: ");
        scanf("%f",&c);

        //calculate the value within the square root sign
        numerator=(b*b-(4*a*c));

        if (numerator>0){
            root_1=-b+sqrt(numerator)/(2*a);
            root_2=-b-sqrt(numerator)/(2*a);

            printf("The value of X is : %f",root_1);
            printf(" Or the value of X is : %f",root_2);

        }else if(numerator==0){
            root_1=-b/(2*a);
            root_2=-b/(2*a);

            printf("The value of X is : %f",root_1);
            printf(" Or the value of X is : %f",root_2);
        }else{
            printf("The roots are imaginary.");
        }

        return 0;

}
