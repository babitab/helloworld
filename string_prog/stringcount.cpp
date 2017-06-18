#include<iostream>
using namespace std;
int main()
{
    int i , count=0;
    char arr[10] , c ;
    cout<<"enter the string :"<<endl ;
    gets(arr);
    cout<<"enter the character :";
    cin>>c;
    for(i = 0 ;arr[i] !='\0' ;i++)
    {
        if(arr[i] == c)
        {
            count++;
        }
    }
        if(count == 0)
        {
            cout<<"not repetion";
        }
        else
        cout<<"repetion of character is :"<<count<<endl;
    
}