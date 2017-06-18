#include<stdio.h>
#include<string.h>
void palindrome(char str[])
{
    int l = 0;
    int h = strlen(str) -1;
    while(h>l)
    {
        if(str[l++] != str[h--])
        {
            printf(" %s string is not palindrome :\n", str);

        }
        
    }
        printf(" %s string is palindrome :" ,str);

    
}
int main()
{
    
    palindrome("abba");
    palindrome("abababa");
    palindrome("abdsjhsjhfsdhf");
}