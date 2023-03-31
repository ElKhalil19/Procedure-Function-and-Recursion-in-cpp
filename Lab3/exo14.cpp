#include <iostream>
#include <string>
using namespace std;
int num (char S)
{   
    int res = S-48;
    return res;
}

int from_str_to_int(string S){
    if(S.size() == 1) return num(S[0]);
    else{
      return num(S[S.size()-1]) + 10*from_str_to_int(S.substr(0,S.size() - 1));
    }
}
int main()
{
    cout<<from_str_to_int("69");
}