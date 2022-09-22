#include "stdio.h"
#include "setjmp.h"

jmp_buf buf;
int val;
#define TRY if((val = setjmp(buf)) == 0)
#define CATCH(num) else if (val == num)
#define THROW(num) longjmp(buf,num)

char equal(char s1[],char s2[], int i){
    int flag=1;
    while (s1[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            flag = 0;
            
            //break;
            
            THROW(1);

        }
        else if (s1[i] != s2[i] || s1[i]>s2[i])
        {
            flag = 0;
            THROW(3);
        }
        i++;
        
    }
        
        
        if(flag == 1)
        {
            THROW(2);
            //printf("\nChuoi s1[%s] va chuoi s2[%s] giong nhau",s1,s2);
        }
        //else{printf("\nChuoi s1[%s] va chuoi s2[%s] khac nhau ",s1,s2);}
       
        

}
int main(int argc, char const *argv[])
{
    // char s1[100],s2[100] = {0};
    // int i = 0;
   // int flag = 1;
/////////////////////////////////
    
    
////////////////////////////////
    

    TRY
    {
    //char s1[100],s2[100] = {0};
    int i = 0;
    // printf("Nhap mang ky tu 1 : ");
    // scanf("%s",&s1);
    // printf("Nhap mang ky tu 2 : ");
    // scanf("%s",&s2);
    // printf("\nMang 1: ");
    // printf("%s    ",s1);
    // //printf("size = %d",s1);
    // printf("\nMang 2: ");
    // printf("%s    ",s2);
    //printf("size = %d",s2);
    char s1[] = "ABCasssa";
    char s2[] = "ABC";

    char ch = equal(s1,s2,i);
    }
    CATCH(1){
        printf("\nChuoi s1 va chuoi s2 khac nhau");
    }
    CATCH(2){
        printf("\nChuoi s1 va chuoi s2 giong nhau");
    }
    CATCH(3){
        printf("\nChuoi s1 dai hon chuoi s2");
    }
    
    return 0;
}
