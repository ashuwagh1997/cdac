#include <iostream>

using namespace std;

class gajjar
{
    double a,b;
    public:
    void read()
    {
        cout<<"\nEnter two double type numbers:";
        cin>>a>>b;
    }
    void div()
    {
        try{

            if(cin.fail())
                throw "Bad input!";
            if( b == 0 )
            throw 0;

            cout<<"\nAns is "<<a/b;
        }
        catch(const int n)
        {
            cout << "\nDivision by " << n << " not allowed\n";
        }
        catch(const char* Str)
        {
            cout<< Str;
        }
    }
};

int main()
{
    gajjar k;
    k.read();
    k.div();
    return 0;
}
