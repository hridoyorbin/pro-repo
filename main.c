/*#include <stdio.h>

int main() {
     int num[100], n;
     printf("How many number : ");
     scanf("%d", &n);
     for (int i = 0; i < n; i++)
     {
        scanf("%d", &num[i]);
     }
     int max = num[0];
     for (int i = 1; i < n; i++)
     {
       if (max < num[i])
       {
        max = num[i];
       }
        
     }
     printf("Maximum = %d\n", max);
       
    return 0;
}*/

#include <stdio.h>

int a = 1, b = 2;

int funct2(int a) {
    return (b + a);
}

int funct1(int a) {
    b = funct2(a + 1) + 1;
    return (b);
}

int main() {
    int c, a = 3;
    for (c = 1; c <= 5; ++c) {
        b = b + funct1(c + 1) + a;
        printf("%d ", b);
    }
    printf("\nAns = %d", b + a);
    return 0;
}
