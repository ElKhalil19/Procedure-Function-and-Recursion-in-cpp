#include <iostream>
using namespace std;
bool twopower (float a)
{
    if(a>2)
    return twopower (a/2.0);
    else if (a==2)
    return 1;
    else
    return 0;
}
int main ()
{
    cout<<twopower(128);
}