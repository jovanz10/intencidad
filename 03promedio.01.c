#include<stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
//hecho por jovany fernandez rodriguez
{
    int a,b,c;
char c1,c2,c3;
float ct;
printf("Dime tuS tres calificaciones  \n");

scanf("%c %c %c", &c1, &c2, &c3);

    if (c1=='A'||c1=='a'){
 a=(0+10);    }
    else if (c1=='B'||c1=='b'){
 a=(0+9);
     }
    else
        if (c1=='C'||c1=='c'){
 a=(0+8);
}
    else if (c1=='D'||c1=='d'){
 a=(0+7);
     }
    else if (c1=='E'||c1=='e'){
 a=(0+6);    }
    else if (c1=='F'||c1=='f'){
    a=(0+5);
    }
       if (c2=='A'||c2=='a'){
 b=(0+10);    }
    else if (c2=='B'||c2=='b'){
 b=(0+9);
     }
    else
        if (c2=='C'||c2=='c'){
    b=(0+8);
}
    else if (c2=='D'||c2=='d'){
 b=(0+7);
     }
    else if (c2=='E'||c2=='e'){
 b=(0+6);    }
    else if (c2=='F'||c2=='f'){
    b=(0+5);
    }
      if (c3=='A'||c3=='a'){
   c=(0+10);    }
    else if (c3=='B'||c3=='b'){
 c=(0+9);
     }
    else
        if (c3=='C'||c3=='c'){
    c=(0+8);
}
    else if (c3=='D'||c3=='d'){
 c=(0+7);
     }
    else if (c3=='E'||c3=='e'){
 c=(0+6);}
    else if (c3=='F'||c3=='f'){
    c=(0+5);
    }

    ct=((a+b+c)/3);
    printf ("Tu promedio es de:%f\n", ct);
return 0;
}
