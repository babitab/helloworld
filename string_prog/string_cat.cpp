#include<iostream>
using namespace std;

void stringCopy (char* from, char* to, int length, int fromStart, int toStart) {
    int i;
    // copy the `from` (starting from `fromStart`) string
    // into the `to` string (starting from toStart)
    for (i = 0; i < length - fromStart; i++)
        to[toStart + i] = from[fromStart + i];
    // add the null terminator character at the end
    to[toStart + i] = '\0';
}

int main()
{
    int i , j , l1 , l2;
    char a1[10], a2[10];
    cout<<"enter the 1 string: ";
    cin>>a1;
    cout<<"enter the 2 string: ";
    cin>>a2;
    l1 = strlen(a1);
    l2 = strlen(a2);
    char a3[l1 + l2];

    // copy the first string into the a3
    stringCopy(a1, a3, l1, 0, 0);
    // copy the second string into the a3
    stringCopy(a2, a3, l2, 0, l1);

    cout<<a3<<"\n";
}