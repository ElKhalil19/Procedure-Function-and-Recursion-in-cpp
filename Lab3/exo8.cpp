/*#include <iostream>
using namespace std;
string binary (int a)
{
    int r;
    string S;
    while(a>2)
    {
        r=a%2;
        S=to_string(r)+S;
        a=a/2;
    }
    return S;

}
int main ()
{
    int n,c;
    cin>>n;
    c=binary(n);
    cout<<c;

}*/


#include <iostream>
using namespace std;
int binary (int a)
{    int b=0;int c=1;
    while (a>0)
    {   b=(a%2)*c+b;
        c=c*10;
        a=a/2;
    }
    return b;
}
int main()
{
    cout<<binary(10);
}