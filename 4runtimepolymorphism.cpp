#include<iostream>
using namespace std;
class Shape
{  public:
  Shape()
  {  cout<<"constructor is created"<<endl;
      }
  virtual void area()
  {  cout<<"this is a method to calculate area"<<endl;
  }
};
class Circle:public Shape
{  private: 
    float r;
   public: 
     Circle(float ra)
     {    r=ra;
     }
   void area()
   {  float a;
      a=3.14*r*r;
      cout<<"area of circle is:"<<a<<endl;
    }
    };
class Rectangle:public Shape
{ private: 
      float l,b;
      
   public:
    Rectangle(float le,float br)
    { l=le;
      b=br;
     }
   void area()
  {  float a;
    a=l*b;
    cout<<"area of rectangle is:"<<a<<endl;
    }
    };
 int main()
 { Shape *e;
   Circle c(2);
   
   Rectangle r(10,40);
   e=&c;
   e->area();
   e=&r;
   e->area();
   return 0;
   }
