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
int nthprimenumber(int n)
{   int x=1;
    int sum=0;
    while (sum<n)
    {
        if(prime(x))
        {sum++;
        }
        x++;

    }
    return x-1;
}
int main()
{
    int c,n;
    cout<<"Enter a number n for calculate the nth prime number\n"<<"n=";
    cin>>n;
    c=nthprimenumber(n);
    cout<<c;
}