#include<iostream>
using namespace std;
int main()
{
    int n,digit,repeat=0,r;
    cin>>n>>digit;
    while(n)
    {
        r=n%10;
        if(r==digit) repeat++;
        n=n/10;
    }
    cout<<repeat;
}
