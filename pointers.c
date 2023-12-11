#include<stdio.h>
int main (){
    int age = 22;
    int *ptr = &age;
    //int _age = *ptr;
    
    printf("%u", &age);
    
    return 0;
}

//pointers in function call
/*#include<stdio.h>

void square(int n); //function declaration 
void _square(int* n);

int main(){
    int number = 4;
    square(number); //function call
    printf("number = %d\n", number);

    _square(&number);
    printf("number = %d\n", number);
     return 0;
}     

void square (int n){ //function defination 
    n = n * n;
    printf("square = %d\n", n);
}

void _square(int* n) {
      *n = (*n) * (*n);
    printf("square = %d\n", *n);
}*/

//swap problem

/*#include<stdio.h>

void swap(int a, int b);
void _swap(int*a, int*b);
int main(){
   int x = 3, y = 5;
   _swap(&x,&y);
   printf("x = %d & y = %d\n", x,y);
    return 0;
}
void _swap(int*a, int*b){
   int t = *a;
   *a = *b;
   *b = t;
}


void swap (int a, int b){
   int t = a;
   a = b;
   b = t;
   printf("a = %d & b = %d\n", a,b);
}*/

/*#include<stdio.h>

void printAdress(int *n);

int main (){
       int n = 4;
        printAdress(&n);
          printf("%p\n",&n);
        return 0;
}
void printAdress(int *n){
    printf("%p\n",n);
}*/
//pointers to pointers
/*#include<stdio.h>
int main (){
  int i = 5;
  int *ptr = &i;
  int **pptr = &ptr;

  printf("value of i is : %d\n", *ptr);
  printf("adress of ptr is : %d\n", &ptr);
  printf("adress of pptr is : %d\n", **pptr);
   
    return 0;
}*/