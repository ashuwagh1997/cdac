/* WAP for a simple class*/

#include<iostream>
using namespace std;

class student
{
    private:
          char name[20];
    	  int module1,module2;
          int result;
    
    public:
          void getData()
          {
           cout<<"enter student details :"<<endl;
           cin.get(name,20);
           cin>>module1;
           cin>>module2;
           result=module1+module2;

  	  }
          void displaystudent()
          {
	   cout<< "Name :" << name << endl;
           cout<< "Module1 :" << module1 << endl;
           cout<< "Module2 :" << module2 << endl;
           cout<< "result of module1 and module2 :"<<result<<endl;
          }
};

int main()
{ 
   student s;
   
   char name[20];
   int module1, module2;
  
   s.getData();
   s.displaystudent();
   return 0;
}
