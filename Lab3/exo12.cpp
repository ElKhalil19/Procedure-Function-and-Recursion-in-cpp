#include <iostream>
using namespace std;
int HCF (int n, int m)
{
    if(n-m == 0)
    {
        return m;
    }else
    {if(n>m)
        return HCF(m,n-m);
        else return HCF(m,n);
    }
}
int main ()
{ 
    cout<< HCF(782,221);
    return 0;
}