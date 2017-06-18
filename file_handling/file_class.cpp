//program to read and write functions
//this pgm is reading and writing a object in a file
#include <iostream>
#include <fstream>
using namespace std;
class Student{
private:
    char name[40];
    int grade;

public:
    void getdata();
    void display();
};

void Student::getdata(){
    char ch;
    
    cout<<"Enter name : ";
    cin.getline(name,40);
    cout<<"Enter grade : ";
    cin>>grade;

    cout<<"\n";
}

void Student::display(){
    cout<<"Name : "<<name<<"\t";
    cout<<"Grade : "<<grade<<"\t";
   }

int main(){
    
    Student s1,s2;
    fstream f;
    f.open("stu.txt",ios::in|ios::out|ios::app);
    if(!f){
	cout<<"Cannot open file !";

    }

	s1.getdata();
	f.write((char*)&s1,sizeof(s1));

    f.seekg(0); //to place cursor at beginning
    cout<<"The contents of stu.txt are shown below : \n";
	while(!f.eof())
 	{
	f.read((char*)&s2,sizeof(s2));
	if(!f.eof())  //last rcord was dispalyed twice so used this
	s2.display();
	} 
    f.close();
   return 0;
}