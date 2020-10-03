#include<stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()

{
int x,y,z;
float  calf;

printf("Dime tu primer calificacion \n");
scanf("%d",&x);

printf("Dime tu se9gunda calificacion \n");
scanf("%d",&y);

printf("Dime tu tercer calificacion \n");
scanf("%d",&z);

calf=(x+y+z)/3;
    if (calf==10){
    printf("tu calificacion final es A \n");
    }
    else
    if (calf==9){
    printf("tu calificacion final es B \n");
    }
    else
        if (calf==8){
    printf("tu calificacion final es C \n");
}
    else if (calf==7){
    printf("tu calificacion final es D \n");
    }
    else if (calf==6){
    printf("tu calificacion final es E \n");
    }
    else if (calf==5){
    printf("tu calificacion final es F \n");
    }

return 0;
}
