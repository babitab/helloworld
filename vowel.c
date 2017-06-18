#include<stdio.h>
int main()
{
    char c;
    int lowercasevowel, uppercasevowel;
    printf("enter a alphabet");
    scanf("%c",&c);
    lowercasevowel=(c == 'a'|| c == 'e'|| c == 'i'|| c == 'o' || c == 'u');
    uppercasevowel=(c == 'A'|| c == 'E' || c == 'I'|| c == 'O'|| c == 'U');
    if(lowercasevowel||uppercasevowel)
    {
        printf("vowel:%c",c);

    }
    else{
        printf("consonate: %c",c);
    }
}