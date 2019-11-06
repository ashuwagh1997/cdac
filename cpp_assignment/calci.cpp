/* First Assignment to create a calculator*/

#include<iostream>
using namespace std;

int getsum(int,int);
int getsub(int,int);   //function prototyping
int getmul(int,int);
int getdiv(int,int);
int getmod(int,int);
//int getsqr(int,int);

int main()
{
  int test1,test2;
  cout<<"enter the test1 and test2 :\n";
  cin>>test1;
  cin>>test2;

  getsum(test1,test2);
  getsub(test1,test2);
  getmul(test1,test2);
  getdiv(test1,test2);
  getmod(test1,test2);
 // getsqr(test1,test2);

return 0;
}

//-----------------------------------addition------------------------------------------- 
int getsum(int x,int y)
{
   int sum;
   sum = x+y;
   cout<<"print sum :"<<sum;
}

//----------------------------------subtraction----------------------------------------

int getsub(int x,int y)
{
   int sub;
   sub = x-y;
   cout<<"print sub :"<<sub;
}
 
//---------------------------------multiplication--------------------------------------

int getmul(int x,int y)
{

   int mul;
   mul = x*y;
   cout<<"print mul :"<<mul;
}

//----------------------------------division--------------------------------------------

int getdiv(int x,int y)
{
   int div;
   div = x/y;
   cout<<"print div :"<<div;
}

//----------------------------------mod-------------------------------------------------

int getmod(int x,int y)
{
   int mod;
   mod = x%y;
   cout<<"print mod :"<<mod;
}

//----------------------------------square----------------------------------------------

//int getsqr(int x,int y)
//{
  // int sqr;
   //sqr = (xy)*(xy);
   //cout<<"print div :"<<sqr;
//}
