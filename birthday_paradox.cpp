#include<iostream>
using namespace std;
int main()
{
    float n;
    float denom=365;
    float num=365;
    cin>>n;
    float p=1;
    int c=0;
    while(p>n)
    {
        p=p*(num)/(denom);
        num--;
        c++;

    }
    cout<<c;
    return 0;
}
