#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 10, j = 11;
    auto helloworld = [&](int a, int b){ //capture all by reference
        ++i; //illegal
        return a + b + i + j; 
    };
    cout<<helloworld(2, 6)<<endl;
    cout<<i<<" "<<j<<endl;
    return 0;
    /*
    30
    11 11
    */
}