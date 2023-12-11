/*#include<stdio.h>
int main(){
   int ara [10] = {10,20,30,40,50,60,70,80,90,100};
for (int i = 0; i < 10; i++)
{
   printf("%dth element is : %d\n", i,ara[i]);
}

   
   return 0;
}*/
/*#include<stdio.h>

void reverse(int arr[],int n);
void printArr(int arr[], int n); 
int main (){
       int arr[5] = {1,2,3,4,5};
       reverse(arr,5);
       printArr(arr,5);
       return 0;
}
  void printArr(int arr[],int n){
    for(int i = 0; i<n; i++){
   printf("%d\t",arr[i]);
}
   printf("\n");
  }

void reverse (int arr[],int n){
   for (int i = 0; i < n/2;i++){
      int firstvalue = arr[i];
      int secondvalue = arr[n-i-1];
       arr[i] = secondvalue;
      arr[n-i-1] = firstvalue;
      

   }
}*/

//macro_Array
/*#include<stdio.h>
#define N 15 //MACRO_ARRAY
int main (){
   int a [N], i;
   for(i=0; i<N; i++){
   printf("enter the input for index %d: ", i);
   scanf("%d", a [i]);
}

   printf("\nArray elements are as folloes:\n");
   for(i=0; i<N; i++){
   printf("%d", a[i]);

}
  return 0;
} */

//reverse_problem

/*#include<stdio.h>
int main(){
   int a[9] ={34,56,54,32,67,89,90,23,21};
   for (int i = 0; i < 9; i++)
   {
      printf("%d ", a[i]);
   }
   printf("\n");
   for(int i=8; i>=0; i--){
      printf("%d ", a[i]);
   }
   return 0;
}*/

/*#include<stdio.h>
int main (){
   int arr [10] = {1,0,0,0,0,2,3,0,0,0};
    int arr[10] = {[0]=1,[5]=2,[6]=3};
    printf("%d", arr[10]);
   return 0;
}*/


//count_array
#include<stdio.h>
int main(){

   int arr[] = {1,2,3,4,5,6,7,8,9,90,89,78,67,56,45,34,21,34,56,67,43,34,56,67,77,64,49,33};
   printf("%d", sizeof(arr)/sizeof(arr[0]));
   return 0;
}

/*#include<stdio.h>
int main(){
   int a[2][3] = {{1,2,3}, {4,5,6}};
   for(int i = 0; i<2; i++){
      for(int j = 0; j < 3; j++){
      printf("%d ", a[i][j]);
      }
            
   }

   return 0; 
}*/
//REVERSE_PROBLEM
/*#include<stdio.h>
int main()
{
   int arr[] ={10,20,30,40,50,60,70,80,90,100};
   for (int i = 0; i < 10; i++)
   {
     printf("%d ", arr[i]);
   }
   for (int i = 9; i>= 0; i--)
   {
      printf("%d ", arr[i]);
   }
   
   
  
   return 0;

}*/
//revrsethenumber
/*#include<stdio.h>
int main(){
   int a[9] ={34,56,54,32,67,89,90,23,21};
   for (int i = 0; i < 9; i++)
   {
      printf("%d ", a[i]);
   }
   printf("\n");
   for(int i=8; i>=0; i--){
      printf("%d ", a[i]);
   }
   return 0;
}*/

/*#include<stdio.h>
int main (){
     int num[4], sum = 0;
     scanf("%d %d %d %d", &num[0],&num[1],&num[2],&num[3]);
     for (int i = 0; i < 4; i++)
     {
      sum = sum + num[i];
     }
       printf("the sum is : %d\n", sum);
      
     
       return 0;
}*/