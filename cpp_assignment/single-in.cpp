/* WAP for single inheritance */

#include<iostream>
using namespace std;

class emp 
{
public:
    int eno;
    char name[20],des[20];

    void get() 
    {
         cout<<"enter the employee ID:";
         cin>>eno;
         cout<<"enter the employee name:";
         cin>>name;
         cout<<"enter the employee designation:";
         cin>>des;
    }
};

class salary : public emp 
{
   float bp, hra, da, pf, np;
public:
 
    void get1() 
    {
         cout<<"enter the Basic Pay:";
         cin>>bp;
         cout<<"enter the Human Resource Allowance:";
         cin>>hra;
         cout<<"enter the Profitability Fund:";
         cin>>pf;
     }

     void calculate() 
     {
          np = bp + hra + da - pf; 
     }

     void display() 
     {           
          cout<< eno <<"\t" << name << "\t" << des << "\t" << bp << "\t" << hra << "\t" << da << "\t" << pf << "\t" << np << "\n";
     }
};

int main()
{
  int i,n;
  char ch;
  salary s[10];
  
  cout<<"enter the number of employee:";
  cin>>n;
  for(i = 0; i < n; i++)
 {
  s[i].get(); 
  s[i].get1(); 
  s[i].calculate();
 }
 cout<<"\n eno\t name\t des\t bp\t hra \t da \t pf \t np \n";
for(i = 0; i < n; i++)
 {
  s[i].display();
  
 }
 return 0;
}
  	
