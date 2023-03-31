#include<iostream>
#include <cmath>
using namespace std;
double distance (double xa, double ya, double xb, double yb)
{
    return sqrt((xb - xa)*(xb - xa)+(yb-ya)*(yb-ya));
}
int main ()
{
    double a,b,c,d,r;
    cout<<"Enter the coordinates of A";
    cout<<endl<<"xA=";
    cin>>a;
    cout<<endl<<"yA=";
    cin>>b;
    cout<<"Enter the coordinates of B";
    cout<<endl<<"xB=";
    cin>>c;
    cout<<endl<<"yB=";
    cin>>d;
    r=distance(a,b,c,d);
    cout<<"the distance is "<<r;
    
}