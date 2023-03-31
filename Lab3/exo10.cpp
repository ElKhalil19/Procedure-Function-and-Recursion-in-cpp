#include <iostream>
using namespace std;
void printnumber (int a)
{
    if (a!=0)
    {
        cout<<a;
        printnumber (a-1);
    }
}
int main()
{
    cout<<"Enter a number";
    
}