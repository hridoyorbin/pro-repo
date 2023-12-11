/*#include<stdio.h>
void genFibonacci(int n);

int main(){
    int n;
    printf("how many number : ");
    scanf("%d",&n);
    genFibonacci(n);
   
}

void genFibonacci(int n){
    int fib[n];
    fib[0]= 0;
    fib[1]= 1;

    for (int i = 2; i < n; i++)
    {
        fib[i]=fib[i-1] + fib[i-2];
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d", fib[i]);
    }
    

    return;
}*/

#include<stdio.h>
int main(){
    int A [3][4];
    for(int i = 0; i< 3; i++){
        for (int j = 0; j < 4; j++)
        {
           printf("A[%d][%d] = ", i,j); 
           scanf("%d", &A[i][j]);
        }

    }
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 4; j++)
       {
        printf("%d ", A[i][j]);
       }
       printf("\n");
    }
    return 0;
}

