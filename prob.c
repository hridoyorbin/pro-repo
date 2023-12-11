#include <stdio.h>
#include<string.h>
int countLength(char arr []);

int main() {
    char arr[] = "shafayet";
    int length = sterlen(arr);
    //fgets(arr,100,stdin);
    printf("Length is %d ",length);
    return 0;
     

}
int countLength(char arr[]){
       int count = 0;
       for (int i = 0; arr[i] != '\0'; i++)
       {
          count++;
       }
       
    return count - 1;


}