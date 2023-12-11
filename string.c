/*#include <stdio.h>

//void printString(char arr[]);

int main() {
    char firstname[] = "Habibulla";
    char lastname[] = "Azim";

    printString(firstname);
    printString(lastname);
    char str[100];
    fgets(str, 100, stdin);
    puts(str);
    return 0;
}

void printString(char arr[]) {
    for (int i = 0; arr[i] != '\0'; i++) {
       printf("%c", arr[i]);
    }
     printf("\n");
}*/

/*#include<stdio.h>

void printString(char arr []);
int countLenght(char arr[]);

int main(){
    char name[100];
    fgets(name, 100, stdin);  
    printf("length is : %d", countLenght(name));
    return 0;
}

int countLenght(char arr[]){
    int count = 0;
     for (int i = 0; arr[i] != '\0';  i++)
   {
      count ++;
   }
   return count-1;
}

void printString(char arr []){
   for (int i = 0; arr[i] != '\0';  i++)
   {
      printf("%c", arr[i]);
   }
   printf("\n");
}*/

/*#include<stdio.h>
#include<string.h>

void slice(char str[], int n, int m);

int main(){ 
   char str[] ="Helloworld"; 
   slice(str, 3, 6);
}
void slice(char str[],int n, int m){
   char newstr[100];
   int j=0;
   for (int i = n; i <= m; i++)
   {
     newstr[j] = str[i];
   }
   newstr[j]= '\0';
   puts(newstr);
}*/
/*#include<stdio.h>
#include<string.h>

void checkChar(char str[], char ch);

int main(){
   char str [] = "Habibulla";
   char ch = 'A';
   checkchar(str, ch);

}

void checkChar(char str[], char ch){
   for (int i = 0; str[i] != '\0'; i++)
   {
       if (str[i] == ch)
       {
        printf("character is present\n");
        return;
       }
       printf("character is not present");
   }
   
}*/

/*#include<stdio.h>
#include<string.h>
int main (){
     char str[100];
     char ch;
     int i = 0;

     while (ch !='\n')
     {
       scanf("%c", &ch);
       str[i]= ch;
       i++;
     }
     str[i] ='\0';
     puts(str);

   return 0;
}*/

/*#include<stdio.h>
#include<string.h>
void salting(char password []);

int main (){
   char passsword [100];
   scanf ("%s", passsword);
   salting(passsword);

}
void salting(char password []){
   char salt [] = "123";
   char newpass[200];

   strcpy(newpass,password);
   strcat(newpass,salt);
   puts(newpass);
}*/

#include<stdio.h>
void shout (int n) {
 if (n <= 0){ 
 return;
 }
 printf("%d ", n);
 shout (n / 2);
 printf("%d ", n);
}
int main () {
 int n = 56;
 shout (n);
 return 0;
}