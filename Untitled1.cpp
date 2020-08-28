#include <stdio.h>
 
int main()
{
	int i=1;
    int num1,num2;
    float result;
    char ch;    //to store operator choice
     
    printf("Enter first number: ");
    scanf("%d",&num1);
    
    do{
	
	printf("Enter second number: ");
    scanf("%d",&num2);
     
     
    printf("Choose operation to perform (+,-,*,/,%): ");
    scanf(" %c",&ch);
     
    result=0;
    switch(ch)    
    {
        case '+':
            num1=num1+num2;
            break;
             
        case '-':
            num1=num1-num2;
            break;
         
        case '*':
            num1=num1*num2;
            break;
             
        case '/':
            num1=(float)num1/(float)num2;
            break;
             
        case '%':
            num1=num1%num2;
            break;
        default:
            printf("Invalid operation.\n");
    }
    i++;
}while(i<=2);
    printf("Result:  %d\n",num1);
    return 0;
}
