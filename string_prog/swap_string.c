#include<stdio.h>


void swap(char *str1 ,char *str2)
{
    char *temp;
    temp = str1;
    str1 = str2;
    str2 = temp;

}
int main()
{
    char *str1 = "geeks";
    char *str2 = "forgeeks";
    
    swap(str1,str2);
    printf("str1 is %s and str2 is %s ", str1 , str2);
    return 0;
}