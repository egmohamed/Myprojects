#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int n = 0;

    while (1)
    {
        a *= 3;
        b *= 2;
        n++;
        if(a > b) break;

    }

    cout<<n;
}
