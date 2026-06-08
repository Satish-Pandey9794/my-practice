#include <stdio.h>
int main () {
    int day;   // 1 - mon , 2 -tue , 3 - wedne , 4 - thu , 5 -  fri , 6 - sat , 7 - satu ;
    printf("enter your day (1-7) :");
    scanf ("%d", &day);

    switch (day){

     case 1: printf("monday \n");
             break;
     case 2: printf("tuesday \n");
             break; 
     case 3: printf("wednesday \n");
             break; 
     case 4: printf("thursday \n");
             break; 
     case 5: printf("friday \n");
             break; 
     case 6: printf("saturday \n");
             break;    
     case 7: printf("sunday \n");
             break;
     defult: printf ("not a valid day");
 
    }

    return 0;
}