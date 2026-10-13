#include<iostream>
using namespace std;
int main()
{  int n1,n2;
     cout<<"enter two numbers"<<endl;
     cin>>n1>>n2;
     
     try{  
         
       if(n1<n2)
       {  throw "invalid";}
       if(n2==0)
       { throw "division by zero";}
       else
       {  cout<<"division is:"<<n1/n2<<endl;}
       }
      catch(const char* msg)
      {  cout<<"Error"<<msg<<endl;}
      return 0;
      }
     
