/*#include<stdio.h> //NcR problem 
int factorial(int x);
int main(){
   int n;
   printf("enter n : ");
   scanf("%d", &n);

   int r;
   printf("enter r : ");
   scanf("%d", &r);

   int ncr = factorial(n)/(factorial(r)*factorial(n-r));
   printf("%d", ncr);
}

int factorial(int x){
     int fact = 1;
    for(int i = 2; i<= x; i++){
        fact *= i;
    }
    return fact;
}*/

#include<stdio.h>
void printTable(int n);

int main(){
   int x;
   printf("enter a number : ");
   scanf("%d", &x);
   printTable(x);
   
}

void printTable (int x){
   for(int i =1; i<=10; i++){
        printf("%d\n", i* x);
   }
}

//natural number
/*#include<stdio.h>
 int sum(int n);

 int main(){
    printf("sum is: %d", sum(5));
    return 0;

 }

 int sum(int n){
    if ( n==1)
    {
        return 1;
    }
    
    int sumNm1 = sum(n-1);
    int sumN = sumNm1 + n;
    return sumN;
 }*/