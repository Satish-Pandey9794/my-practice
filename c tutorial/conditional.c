#include <stdio.h>
int main () {
    int age;
    printf("enter your age : ");
    scanf("%d", &age);

    if(age>18) {
        printf("adult \n");
        printf("you can vote \n");
        printf("you can drive car \n");
    }

    else {
        printf("not adult \n");
    }

    printf("Thank you");   
    return 0;
}