#include <iostream>
#include <string>
using namespace std;

template< typename T>
bool isEqualTo(T x,T y)
{
    if(x==y)
        return true;
    else
        return false;
}

template< typename T>
class Make
{
public:
    Make(T a)
    {
        setMount(a);
    }
    void setMount(T x)
    {
       x1=x;
    }

    T getMount()
    {
        return x1;
    }

    bool isEqualTo( Make &right)
    {
      if(*this==right)
            return true;
        return false;
    }

     bool operator==(Make & right)
     {
         if((*this).getMount()==right.getMount())
             return true;
         return false;
     }
private:
    T x1;
};



int main()
{
    cout<<"������������"<<endl;
    int a,b;
    cin>>a>>b;
    cout<<"����"<<a<<"��"<<b<<endl;
    cout<<isEqualTo(a,b)<<endl<<endl;


    cout<<"��������������"<<endl;
    double a1,b1;
    cin>>a1>>b1;
    cout<<"������"<<a<<"��"<<b<<endl;
    cout<<isEqualTo(a1,b1)<<endl<<endl;


    cout<<"���������ַ���"<<endl;
    string a2,b2;
    cin>>a2>>b2;
    cout<<"������"<<a<<"��"<<b<<endl;
    cout<<isEqualTo(a2,b2)<<endl<<endl;

   Make<int> m1(5),m2(5);
   cout<<"����5��5"<<endl<<m2.isEqualTo(m1)<<endl<<endl;

   Make<string> m3("china"),m4("england");
   cout<<"�ַ���china��england"<<endl<<m4.isEqualTo(m3)<<endl<<endl;

    return 0;
}

