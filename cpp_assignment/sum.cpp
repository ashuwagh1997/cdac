/* WAP for simple sum*/

#include<iostream>
using namespace std;

int getsum(int,int);
 int getsub(int,int);   //function prototyping

int main()
{
  int test1,test2;
  cout<<"enter the test1 and test2 :\n";
  cin>>test1;
  cin>>test2;


  getsum(test1,test2);
  getsub(test1,test2);

return 0;
}
 
//------------addition------------- 
int getsum(int x,int y)
{
   int sum;
   sum = x+y;
   cout<<"print sum :"<<sum;
}
//------------subtraction-------------

int getsub(int x,int y)
{
   int sub;
   sub = x-y;
   cout<<"print sub :"<<sub;
}

