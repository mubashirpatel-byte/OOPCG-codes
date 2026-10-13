#include<iostream>
#include<string>
using namespace std;
class Student
{
private:int rollno;
string name;
float marks;
 public:
 void accept()
 {  cout<<"enter roll no";
  cin>>rollno;
  cout<<"enter name";
  cin>>name;
  cout<<"enter marks";
  cin>>marks;
  }
  void display()
  { cout<<"roll no of student is"<<rollno<<endl;
  cout<<"name of student is"<<name<<endl;
  cout<<"marks of student"<<marks<<endl;
  }
 };
 int main()
 {
 Student s;
 s.accept();
 s.display();
 return 0;
 }
