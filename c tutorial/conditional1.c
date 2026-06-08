#include<stdio.h>
int main () {
    int age;
    printf("enter your age : ");
    scanf("%d", &age);

    if(age >= 18) {
        printf("adult \n");
        printf("they can vote \n");
        printf("they can also drive car \n");
    }

    else if(age>13 && age < 18) {
        printf("teenager \n");
    }

    else{
        printf("child \n");
    }

    printf("thank you");
    return 0;
}