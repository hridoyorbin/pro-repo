#include<stdio.h>
int main(){
    char oparator;
    double num1;
    double num2;
    double result;

    printf("\nenter an oparetor (+ - * /): ");
    scanf("%c",&oparator);

    printf("enter number 1: ");
    scanf("%lf",&num1);

    printf("enter number 2: ");
    scanf("%lf",&num2);
    
  switch (oparator)
  {
  case '+' : 
    result = num1 + num2;
    printf("\nresult : %lf", result);
    break;

  case '-' : 
    result = num1 - num2;
    printf("\nresult : %lf", result);
    break;

    case '*' : 
    result = num1 * num2;
    printf("\nresult : %lf", result);
    break;

    case '/' : 
    result = num1 / num2;
    printf("\nresult : %lf", result);
    break;
  
  
  default:
     printf("%c is not valid", oparator);
    break;
  }


  return 0;


}