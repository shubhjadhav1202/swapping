#include<iostream>
using namespace std;
class swap()
{
  int a,b,temp;
  public:
        swap(int a,int b)
        {
          this->a=a;
          this->b=b;
          }
    friend void swap(swap&);
    };
    cout<<"before swapping:"<<s1.a<<" "<<s1.b;
    s1.temp=s1.a;
    s1.a=s1.b;
    s1.b=a1.temp;
    cout<<"after swapping:"<<s1.a<<""<<s1.b;
    }
    int main()
     {
      swap (5,6);
      swap();
      return 0;
      }
