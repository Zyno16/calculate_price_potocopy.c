#include <stdio.h>
#include <stdlib.h>

int main()
{ int n;
    float p,p2,p3,x;
    printf("ENTER THE NUMBER OF THE PAPERS?:");
    scanf("%f",&x);
    if(x<=10){
            p=x*0.3;
        printf("the price is%.2f pound\n,p");
    }
    else if(x>10&&x<=30){
       n=x-10;
       p2=3+(n*0.25);
       printf("the price is%.2f pound",p2);
    }
       else{
       n=x-30;
       p3=8+(n*0.2);
       printf("the prix is%.2f pound\n",p3);
       }


   return 0;
}
