//PGM to write data in file
#include<fstream>
#include<iostream>
using namespace std;
int  main()
{

  ofstream fout  ;//fout is a object of ofstream class.that means our o/p stream is ready
  //so now i need to open my file in which i need to send my data
  fout.open("myfile.txt",ios::out);
  /*u can write file name with complete path also like c:\tc\ .....
  otherwise it will search for file in
  ur current directory in which ur pgm(here my turbo c is in my bin directory so it will create there) is present.
  If in current directory a file with name " myfile.txt"is present then this function
  will open that file otherwise it will
  create a file(if file doesn't exist) in ur current directory in which ur pgm is present
  and open it.
  Once ur file is open it will be linked with fout.
  */
 fout<<"hello";  // now hello will be written in ur file

cout<<"hello";
fout.close();
return 0;
}
