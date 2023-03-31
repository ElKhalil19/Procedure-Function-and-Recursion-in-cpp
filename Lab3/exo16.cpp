#include <iostream>
using namespace std;
int count (int a, int i=-1)
{    i++;
    if(a)
    {
        return count(a/10,i);
    }
    else 
    return i;
}
int main()
{
    cout<<count(3);
}