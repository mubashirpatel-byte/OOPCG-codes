#include<iostream>
#include<string>
using namespace std;
class Employee
{ protected: int empId;
   string empName;
   
   public: 
    Employee()
    { empId=1;
    empName="shrawani";
      }
  virtual void calsalary()
  {  cout<<"salary of employee is"<<endl;
   }
  void display()
  {  cout<<"ID of employee is"<<empId<<endl;
     cout<<"Name of employee is"<<empName<<endl;
     }
   };
   
 class PermanentEmp:public Employee
 {  private: double basicsal;
       double allowance;
       
    public:
     PermanentEmp(int i,string nm,double basic,double allow)
     { empId=i;
      empName=nm;
       
       basicsal=basic;
       allowance=allow;
       }
    void calsalary()
    { double salary=basicsal+allowance;
      cout<<"employee salary is"<<salary<<endl;
    }
    void pdisplay()
    { 
      display();
      }
  };
class ContractEmp:public Employee
{ private: int hr;
      float sal;
  public: 
   ContractEmp(int i,string nm,int h,float s)
   {  empId=i;
     empName=nm;
     hr=h;
     sal=s;
     }
   void calsalary()
   { double salary= hr*sal;
     cout<<"salary is"<<salary<<endl;
     }
  void cdisplay()
  { display();
  }
  };
   
     
int main()
{ PermanentEmp p(102,"shrawani",1000000,500000);
  p.pdisplay();
  p.calsalary();
  ContractEmp c(190,"shravani",3,4000);
  c.cdisplay();
  c.calsalary();
  return  0;
  }
       
    
