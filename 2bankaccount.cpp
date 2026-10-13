#include<iostream>
#include<string>
using namespace std;
class BankAccount
{ private: int account_no;
   string name;
   float balance;
   static int count;
  public:
      BankAccount(int acc,string nm,float bl)
      {  account_no=acc;
          name=nm;
          balance=bl;
          count++;
          cout<<"bank account is created successfully";
       }
       void display()
       { cout<<"account number is:"<<account_no<<endl;
         cout<<"name of account holder is:"<<name<<endl;
         cout<<"account balance is:"<<balance<<endl;
       }
       static void display_count()
       {  cout<<"number of bank accout is:"<<count<<endl;
       
      }
      ~BankAccount()
      { cout<<"account is destroyed"<<endl;
      }
      };
      int BankAccount::count=0;
 int main()
 { BankAccount b1(1,"Shrawani", 10000000);
   BankAccount b2(2, "Shravani", 5000000);
   b1.display();
   b2.display();
   BankAccount::display_count();
   return 0;
   }



