#include <iostream>
#include <math.h>
using namespace std;
double isDefined (double x, bool isDefined)
{
if (x>2 ^ x<1)
{
isDefined=0;
}
else
{
    return sqrt((x-1)*(2-x));
    isDefined=1;
}
}
int main ()
{   int x;
    double y; bool a;
    cout<<"Enter a value of x"<<endl<<"x=";
    cin>>x;
    y=isDefined(x,a);
    if(a)
    {
         cout<<"the value is"<<y<<endl;
    }
   else
   cout<<"your variabl doesnt suit the function";
}