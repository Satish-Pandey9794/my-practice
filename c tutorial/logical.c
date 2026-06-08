// logical operator [ AND(&&), OR (||), NOT (!)]
#include<stdio.h>
int main () {
    printf("%d \n", 4>3 && 5>2);    //and check
    printf("%d \n", 3>4 && 5>2);

     printf("%d \n", 4>3 || 5>2);    //or check

     printf("%d \n", !((5>1)&& (3>4)));   //not check
    return 0;
}