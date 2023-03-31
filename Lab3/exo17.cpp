#include <iostream>
using namespace std;
void hanoi (int n, char src, char aux, char tar)
{
    if (n!=0)
    {   
        hanoi (n-1, src, tar, aux);
        cout<<"Move "<<n<<" from "<<src<<" to "<<tar<<endl;
        hanoi (n-1, aux, src, tar);
    }

}
int main()
{   char A,B,C;

    hanoi(4,'A','B','C');
    return 0;
}