/*WAP array function declaration*/

#include<iostream>
using namespace std;

struct person
{
  char name[50];
  int age;
  float salary;
};

void displayData(person);   //function declaration
int main()
{
  person p;
  cout<<"enter full name:";
  cin.get(p.name,50);
  cout<<"enter the age";
  cin>>p.age;
  cout<<"enter the salary:";
  cin>>p.salary;

//function call with structure variables as an argument					
  
  displayData(p);
  return 0;
}

void displayData(person p)
{
  cout<<"displaying information"<<endl;
  cout<<"name:"<<p.name<<endl;
  cout<<"age:"<<p.age<<endl;
  cout<<"salary:"<<p.salary<<endl;
}
