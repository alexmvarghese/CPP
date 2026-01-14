#include<iostream>
using namespace std;
int sum(int a, int b)
{
    int s;
    s = a+b;
    return s;
}

int main()
{
    int x, y, result;
    cin>>x>>y;
    cout<<"The sum is:";
    result=sum(x, y);
    cout<<result;
}