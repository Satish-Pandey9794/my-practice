#include<stdio.h>
int main () {
    char ch;
    printf("enter character : ");
    scanf("%C", &ch);

    if(ch >= 'A' && ch <= 'Z') {
        //(ch >= 65 && ch <= 90)
        printf ("Uppercase \n");
    }

    else if (ch > 'a' && ch <= 'z') {
        printf(" Lowercase \n");
        
    }

    else {
        printf("Not english letter");
        printf("Please enter a english letter");
    }
    return 0;
}