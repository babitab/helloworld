//PGM to read content from file n display on o/p screen
#include<fstream> 
#include<iostream> 
using namespace std;
int  main()
{

  ifstream fin  ;//fin is a object of ifstream class.that means our i/p stream is ready
  //so now i need to open my file in which i need to send my data
  fin.open("myfile.txt");
  /*we want to read from this file
suppose we write char c;
cin>>c;
here we will be entering data from keyboard n it will be stored in c.
Coz cin object is associated with keyboad thats why ur data will be generated through keyboard
here fin is associated with myfile.txt 

here eof() function will return 1 when ur file end will come.
otherwise it will return 0 */
char ch;
fin>>ch;
 while(!fin.eof())
 {
cout<<ch;
fin>>ch;
}
//getch();
fin.close();
return 0;
}
/*if there will be space in b/w words in ur file then that will not be displayed in this PGM.
As extraction operator(>>) through which v r reading characters of file , assume space,tab and next line
as data seperator not the data .So for it they r special symbols not the data so it wont read them.
So space didn't printed.For it solution is instead of using fin>>ch; use get() function.
*/