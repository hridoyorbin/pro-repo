/*#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    s1.roll = 233276;
    s1.cgpa = 7.8;
    strcpy(s1.name, "hridoy");

    printf("roll is : %d\n", s1.roll);
    printf("cgpa is : %f\n", s1.cgpa);
    printf("name is : %s\n", s1.name);

    return 0;
}*/

/*#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    s1.roll = 233276;
    s1.cgpa = 7.8;
    strcpy(s1.name, "hridoy");

    printf("roll is : %d\n", s1.roll);
    printf("cgpa is : %f\n", s1.cgpa);
    printf("name is : %s\n", s1.name);

    return 0;
}*/

#include<stdio.h>
#include<string.h>

struct adress{ 
    int housno;
    int blockno;
    char city[50];
    char state[50];
};
int main(){
    struct adress a1 = {21, 69, "Dhaka", "Bangladesh"};
    printf("%d %d %s %s", a1.housno, a1.blockno, a1.city, a1.state);

     return 0;
    
}

#include <stdio.h>

// Define the structure
struct Person {
    int age;
    char name[50];
    char degree[50];
    double salary;
    char department[50];  // New member
};

int main() {
    // Declare an array of the structure type for five members
    struct Person persons[2];

    // Input information for each member
    for (int i = 0; i < 5; i++) {
        printf("\nEnter information for person %d:\n", i + 1);
        
        printf("Enter age: ");
        scanf("%d", &persons[i].age);

        printf("Enter name: ");
        scanf("%s", persons[i].name);

        printf("Enter degree: ");
        scanf("%s", persons[i].degree);

        printf("Enter salary: ");
        scanf("%lf", &persons[i].salary);




        printf("Enter department: ");
        scanf("%s", persons[i].department);
    }

 

    return 0;
}
