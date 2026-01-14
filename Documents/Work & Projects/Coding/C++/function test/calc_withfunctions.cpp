#include<iostream>
#include<string>
using namespace std;
int sum(int a, int b)           //sum function
{
    int s=a+b;
    return s;
}

int diff(int a, int b)           //difference function
{
    int d=a-b;
    return d;
}

int mult(int a, int b)           //multiplication function
{
    int m=a*b;
    return m;
}

int divide(int a, int b)           //divding function
{
    int dv=a/b;
    int qo=a%b;
    return dv;
}

int main()
{
    char cont;
    
        int x, y, res, choice;
        cout<<"Welcome to Calculator. Enter two numbers:\n";
        while(cont !='q')
    {
        cin>>x>>y;
        cout<<"Choose operation\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n0.Quit Application(1/2/3/4/0)";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                res=sum(x,y);
                cout<<"Result is:"<<res;
                break;
            }

            case 2:
            {
                res=diff(x,y);
                cout<<"Result is:"<<res;
                break;
            }

            case 3:
            {
                res=mult(x,y);
                cout<<"Result is:"<<res;
                break;
            }

            case 4:
            {
                res=divide(x,y);
                cout<<"Result is:"<<res;
                break;
            }

            case 0:
            {
                return 0;
            }

            default:
            cout<<"Input error, exiting application.";
            return -1;
        }
        cout<<"\nContinue computing? Press q to exit.";
        cin>>cont;
    }
}