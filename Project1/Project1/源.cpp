#include<stdio.h>  
#include<string.h>
int main()
{
    char a[20] = "You_are_a_girl";
    char* p = a;
    char** ptr = &p;
    //printf("p=%d\n",p);  
    //printf("ptr=%d\n",ptr);  
    //printf("*ptr=%d\n",*ptr);  
    printf("**ptr=%c,p=%p\n",**ptr,p);
    //printf("ptr=%d\n",ptr);  
    //printf("*ptr=%d\n",*ptr);  
}