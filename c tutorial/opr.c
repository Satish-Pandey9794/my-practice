#include<stdio.h>
int main () {
    int a = 4 + 9 * 10;        // operator precedance rule=high precedace
    int b = 4*3/6*2;           //associativity rule (for same precedance)= left to right

    printf("%d \n",a);
    printf("%d",b);

    return 0;
}