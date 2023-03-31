#include<iostream>
using namespace std;
void swap (int &a, int &b)
{
    int c=a;a=b;b=c;
    cout<<"the value of a is "<<a<<endl<<"the value of b is "<<b<<endl;
}
int main()
{
    int a,b;
    cout<<"enter two values";
    cin>>a>>b;
    swap(a,b);

}