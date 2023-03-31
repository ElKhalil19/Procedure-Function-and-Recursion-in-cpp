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
int main(){
    int x;
    cout<<"Enter a number";
    cin>>x;
    if (prime(x))
    cout<<"it is a prime number";
    else
    cout<<"it is not a prime number";
}