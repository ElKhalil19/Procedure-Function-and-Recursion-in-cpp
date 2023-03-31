#include <iostream>
using namespace std;
int power (int a, int b)
{
    return !b ? 1 : a*power(a,b-1);
}

int main()
{
    cout<<power(2,9);
}