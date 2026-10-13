#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Employee
{ int empId;
   string name;
   float salary;
   public:
     void get_data()
     {  cout<<"enter the employee id"<<endl;
        cin>>empId;
        cout<<"enter the name of employee"<<endl;
        cin>>name;
        cout<<"enter the salary"<<endl;
        cin>>salary;
        }
     void writeToFile(ofstream &File)
     { File<<empId<<" "<<name<<" "<<salary;
     }
     void readToFile(ifstream &File)
     { File>>empId>>name>>salary;
     }
     void display_data()
     {  cout<<"employee id is:"<<empId<<endl;
        cout<<"name of the employee:"<<name<<endl;
        cout<<"salary of the employee:"<<salary<<endl;
        }
      };
int main()
{ Employee e;
  int n;
  cout<<"enter the number of employees:"<<endl;
  cin>>n;
  ofstream outfile("shrawani.txt");
  if(!outfile)
  { cout<<"error in opening file"<<endl;
    return 1;
    }
  for(int i=0;i<n;i++)
  { cout<<"employees are:"<<endl;
    e.get_data();
    e.writeToFile(outfile);
    }
   outfile.close();
  ifstream infile("shrawani.txt");
  if(!infile)
  { cout<<"error in writing file";
    return 1;
    }
  cout<<"employee read"<<endl;
  while(infile>>ws && !infile.eof())
  { e.readToFile(infile);
    if(infile)
    e.display_data();
    }
   infile.close();
   return 0;
   }
        
