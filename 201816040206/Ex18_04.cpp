#include <iostream>

#include <stdexcept>

#include "Array.h"



using namespace std;

int main()

{
  Array<int>intArray(5);
  cout <<"����5������������:"<<endl;
  cin >>intArray;
  cout<<"���������:"<<endl;
  cout<<intArray;
  int n;
  cin>>n;
  cout<<"��������е�n+1��Ԫ��Ϊ:"<<endl;
  cout<<intArray[n];
  Array<int>intArray1(6);
  cout<<"����6������������:"<<endl;
  cin>>intArray1;
  cout<<"���������:"<<endl;
  cout<<intArray1;
  cout<<"�Ƚ������������Ƿ����:"<<endl;
  if(intArray==intArray1)
        cout<<"�������������"<<endl;
    else
        cout<<"���������鲻���"<<endl;


  Array<double>doubleArray(2);
   cout <<"����2��double��������:"<<endl;
   cin>>doubleArray;
   cout<<"���������:"<<endl;
   cout<<doubleArray;
   int b;
   cin>>b;
   cout<<"��������е�n+1��Ԫ��Ϊ:"<<endl;
   cout<<doubleArray[b];
   Array<double>doubleArray1(5);
   cout <<"����5��double��������:"<<endl;
    cin>>doubleArray1;
    cout<<"���������:"<<endl;
    cout<<doubleArray1;


}
