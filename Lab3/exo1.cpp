#include <iostream>
#include <cmath>
using namespace std;
void circle (float t)
{
    cout<<"the diameter is "<<2*t<<endl;
    cout<<"Circumference is"<<2*M_PI<<endl;
    cout<<"Area is "<<2*M_PI*t*t<<endl;
    
}
int main()
{
    float t;
    cout<<"enter the rdius";
    cin>>t;
    circle(t);
}