
#include "stdio.h"


int i,n;
///////////////////
typedef enum {
    re = 0x00,
    p1 =(0x00 || 0x01) << 0,
    p2 =(0x00 || 0x01) << 1,
    p3 =(0x00 || 0x01) << 2,
    p4 =(0x00 || 0x01) << 3,
    p5 =(0x00 || 0x01) << 4,
    p6 =(0x00 || 0x01) << 5,
    p7 =(0x00 || 0x01) << 6,
    p8 =(0x00 || 0x01) << 7
    
}pin;
pin p;
void delay()
{
    for (i = 0; i < 1; i++)
    {
        printf("\n%d",re);
    }
}

void blink()
{
    
    
    if (n==1){printf("\n%d",p1);}
    else if (n==2){printf("\n%d",p2);}
    else if (n==3){printf("\n%d",p3);}
    else if (n==4){printf("\n%d",p4);}
    else if (n==5){printf("\n%d",p5);}
    else if (n==6){printf("\n%d",p6);}
    else if (n==7){printf("\n%d",p7);}
    else{printf("\n%d",p8);}
      
}


int main(int argc, char const *argv[])
{
   
    // /////////////////
    printf("\nnhap vao pin can blink");
    do
    {
        printf("\nnhap pin= ");
        scanf("%d",&n);
        printf("\nban da chon pin %d",n);
    } while (n<1 || n>7);
    ////////////////////
   
   while (n)
   {
     blink();
    delay();
   }
   
    return 0;
}


