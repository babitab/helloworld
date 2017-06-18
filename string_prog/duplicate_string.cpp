#include<iostream>
using namespace std;
char *removeduplicate(char *str)
{
    int res =1;
    int id = 1;
    while(*(str + id))
    {
        if(*(str + id) != *(str + id -1 ))
        {
            *(str + res) = *(str + id);
            res++;
        }
        id++;
    }
        
    *(str + res) = '\0';
    
    return str;
}
char * remove_duplicate(char *str)
{
    int n = strlen(str);
    sort(str ,str+n);
    return removeduplicate(str);
}
int main()
{
    char str[] = "geeksforgeeks";
    cout<<remove_duplicate(str);
    return 0;
    }