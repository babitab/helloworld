#include<iostream>
using namespace std;
int main()
{
    int i , j ,flag = 1;
    char str1[10] , str2[10];
    cout<<"enter the 1 string :" <<endl;
    cin>>str1;
    cout<<"enter the 2 string :"<<endl;
    cin>>str2;

    // get the length of both the strings
    i=0, j = 0;
    while(str1[i] != '\0')
    {
        i++;
    }
    while(str2[j] != '\0')
    {
        j++;
    }


    // do the length comparision
    if(i != j)
    {
        flag = 0;

    } else
    {
        i = 0;
        // loop till we reach at the end of strings
        // j holds the length of the strings - 1
        // i holds the current index in the string
        while(i <= j)
        {
            // check the current char is matched
            if(str1[i] != str2[i])
            {
                // noop
                flag = 0;
                break;
            }
            i++;
        }
        
    }
    if(flag == 0)
    cout<<"string not match";
    else
    cout<<"string match";
}