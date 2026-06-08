#include<stdio.h>
int main () {
    int marks;
    printf("enter your marks (0-100) : ");
    scanf("%d", &marks);

    if(marks >=0 && marks <= 30) {
        printf ("Fail \n");
        printf("Not pramoted \n");
    }

    else if (marks>30 && marks <=100) {
        printf("Pass \n");
        printf(" pramoted \n");
        
    }

    else {
        printf(" !!wrong number enter !! \n");
        printf("Please enter a right number");
    }
    return 0;
}