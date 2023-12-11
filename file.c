#include<stdio.h>
int main (){
    FILE *fptr;
    fptr = fopen("odd.text", "w");
    int n;
    printf("enter n : ");
    scanf("%d", &n);
    for (int i = 0; i <=n ; i++)
    {
        if (i % 2 == 0)
        {
          fprintf(fptr,"%d\n", i);
        }
            
    }
    
    fclose(fptr);
    return 0;
}
