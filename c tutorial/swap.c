#include<stdio.h>
int main(){
    int a = 5,b = 7,c;
    printf("before swap a=%d,b=%d\n\n",a,b);
    c=a;
    a=b;
    b=c;
    
    printf("after swap a=%d,b=%d\n\n",a,b);
    return 0;
}