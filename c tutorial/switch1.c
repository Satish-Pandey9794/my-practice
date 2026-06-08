#include <stdio.h>
int main () {
    char day;   // m - mon , t -tue , w - wedne , T- thu , f -  fri , s - sat , S - sun ;
    printf("enter your day (m, t, w, T, f, s, S) :");
    scanf ("%C", &day);

    switch (day){

     case 'm': printf("monday \n");
             break;
     case 't': printf("tuesday \n");
             break; 
     case 'w': printf("wednesday \n");
             break; 
     case 'T': printf("thursday \n");
             break; 
     case 'f': printf("friday \n");
             break; 
     case 's': printf("saturday \n");
             break;    
     case 'S': printf("sunday \n");
             break;
     defult: printf ("not a valid day");
 
    }

    return 0;
}