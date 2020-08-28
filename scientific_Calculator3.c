#include<stdio.h>
#include<math.h>
#define PI 3.14159265

float sine(float x);
float cosine(float x);
float tangent(float x);
float exponent(float x);
float logb10(float x);
float logb2(float x);
float power(float x, float y);
float fmodu(float x, float y);
float add(float x, float y);
float sub(float x, float y);
float mult(float x, float y);
float div(float x, float y);
float squareRoot(float x);
int main()
{
    int n,i,f=1,num;
    float x,y,z;
    do
    {
    	system ("CLS");
        printf ("MENU\n1.SIN\n2.COS\n3.TAN\n4.EXP\n5.LOG10\n6.LOG2\n7.POW\n8.FMOD\n9.ADDITION\n10.SUBTRACTION\n11.MULTIPLICATION\n12.DIVISION\n13.FACTORIAL\n14.SQUAREROOT\n15.Exit\n");
        printf("Enter your choice:\n");
        scanf("%d", &n);

        if(n==1)
        {
            printf("Enter the degree:\n");
            scanf("%f", &x);
            z=sine(x);
            printf("sin(%.2f) = %.2f\n",x,z);
            getch();
            
        }

        else  if(n==2)
        {
            printf("Enter the degree:\n");
            scanf("%f", &x);
            z=cosine(x);
            printf("cos(%.2f) = %.2f\n",x,z);
            getch();
        }

        else  if(n==3)
        {
            printf("Enter the degree:\n");
            scanf("%f", &x);
            z=tangent(x);
            printf("tan(%.2f) = %.2f\n",x,z);
            getch();
        }

        else if(n==4)
        {
            printf("Enter the power of e:\n");
            scanf("%f", &x);
            z=exponent(x);
            printf("e^(%.2f) = %.2f\n",x,z);
            getch();
        }

        else  if(n==5)
        {
            printf("Enter the number to find log10:\n");
            scanf("%f", &x);
            z=logb10(x);
            printf("logb10(%.2f) = %.2f\n",x,z);
            getch();
        }

        else if(n==6)
        {
            printf("Enter the number to find log2:\n");
            scanf("%f", &x);
            z=logb2(x);
            printf("log2(%.2f) = %.2f\n",x,z);
            getch();
        }

        else   if(n==7)
        {
            printf("Enter the base:\n");
            scanf("%f", &x);
            printf("Enter the exponent:\n");
            scanf("%f", &y);
            z=power(x,y);
            printf("%.2fd^%.2f = %.2f\n", x,y,z);
            getch();
        }

        else  if(n==8)
        {
            printf("Enter the number:\n");
            scanf("%f", &x);
            printf("Enter the modulor:\n");
            scanf("%f", &y);
            z=fmodu(x,y);
            printf("The floating point remainder of %.2f / %.2f = %.2f\n",x,y,z);
            getch();
        }

        else if (n==9)
        {
            printf("Enter the first number:\n");
            scanf("%f", &x);
            printf("Enter the second number:\n");
            scanf("%f", &y);
            z= add(x,y);
            printf("The addition of %.2f+%.2f=%.2f\n",x,y,z);
            getch();
        }
        else if (n==10)
        {
            printf("Enter the first number:\n");
            scanf("%f", &x);
            printf("Enter the second number:\n");
            scanf("%f", &y);
            z= sub(x,y);
            printf("The subtraction of %.2f - %.2f=%.2f\n",x,y,z);
            getch();
        }
        else if (n==11)
        {
            printf("Enter the first number:\n");
            scanf("%f", &x);
            printf("Enter the second number:\n");
            scanf("%f", &y);
            z= mult(x,y);
            printf("The multiplication of %.2f * %.2f=%.2f\n",x,y,z);
            getch();
        }
        else if (n==12)
        {
            printf("Enter the first number:\n");
            scanf("%f", &x);
            printf("Enter the second number:\n");
            scanf("%f", &y);
            z= div(x,y);
            printf("The division of %.2f / %.2f=%.2f\n",x,y,z);
            getch();
        }
        else if (n==13)
        {
            printf("Input the number : ");
            scanf("%d",&num);

            for(i=1;i<=num;i++)
            f=f*i;

          	printf("The Factorial of %d is: %d\n",num,f);
			getch();
        }
         else if (n==14)

         {
              printf("Input thesquareRoot number : ");
             scanf("%f",&x);
             z=squareRoot(x);
            printf("Square root of %.2lf =  %.2lf", x, z);
            getch();

         }




    }
    while(n!=15);
    
    return 0;
}

float sine(float x)
{
    return sin(x*PI/180);
}

float cosine(float x)
{
    return cos(x*PI/180);
}
float tangent(float x)
{
    return tan(x*PI/180);
}

float exponent(float x)
{
    return exp(x);
}

float logb10(float x)
{
    return log10(x);
}

float logb2(float x)
{
    return log2(x);
}

float power(float x, float y)
{
    return pow(x,y);
}

float fmodu(float x, float y)
{
    return fmod(x,y);
}
float add(float x, float y)
{
    return (x+y);
}
float sub(float x, float y)
{
    return (x-y);
}
float mult(float x, float y)
{
    return (x*y);
}
float div(float x, float y)
{
    return (x/y);
}
float squareRoot(float x)
{
    return sqrt(x);
}
