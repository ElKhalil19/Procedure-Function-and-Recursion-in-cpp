#include <iostream>
using namespace std;
bool prime (int a)
{   int sum=0;
    for(int i=1; i<a; i++)
    {
        int r=a%i;
        if (r==0)
        sum= i +sum;
    }
    if (sum==1)
    return true;
    else 
    return false;
}
int main()
{   int a,b;
    cout<<"Enter an enterval [a,b]\n"<<"a=";
    cin>>a; cout<<"b="; cin>>b;
    while (a>b)
{
    cout<<"b must be greater than a\n"<<"a=";
    cin>>a; cout<<"b="; cin>>b;
}
    int x=a;
    while(x>=a && x<=b)
    {
        if(prime(x))
        {
            cout<<x<<", ";
        }
        x++;
    }
    
}