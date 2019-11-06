#include<iostream>
using namespace std;

class account
{
  int acc_no;
  char o_name[20];
  long int amt;
  string acc_type;
  string acctype[8]={"saving","current","fixed","recurring","saving","current","fixed","recurring"};

public:
static int temp;

int check_type()
{
 int i;
 for(i=0;i<10;i++)
 {
  if(acc_type==acctype[i])
   return 0;
 }
return 1;
}

void setdata()
{
  acc_no=temp++;
  cout<<endl;
  cout<<"enter owner name, account type,initial amt:- ";
  cin>>o_name>>acc_type>>amt;
while(check_type())
{
 cout<<"not valid accoun type. enter again:- ";
 cin>>acc_type;
}
}

void getdata()
{
 cout<<"account no \t owner name \t account type \t balance";
 cout<<endl<<acc_no<<"\t\t "<<o_name<<"\t\t "<<acc_type<<"\t\t "<<amt<<endl;
 }
};

int account::temp=2000;

int main()
{
 account a[5];

for(int i=0;i<2;i++)
a[i].setdata();

for(int i=0;i<2;i++)
a[i].getdata();

return 0;
}
