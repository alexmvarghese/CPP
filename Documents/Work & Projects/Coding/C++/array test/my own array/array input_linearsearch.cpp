#include<iostream>
using namespace std;
int main()
{
    int i, ra[25], n, item, ctr=0;
    cout<<"Welcome to array search - linear,v1.0.\n";
    cout<<"Enter the number of elements in the array.\n";
    cin>>n;
    cout<<"Enter the array elements.\n";
    for(i=0;i<n;i++)
        cin>>ra[i];
    cout<<"Enter value to be searched.";
    cin>>item;
    cout<<"The elements in the array are:";
    for(i=0;i<n;i++)
        cout<<ra[i]<<'\t';
    for(i=0;i<n;i++)
    {
        if(item==ra[i])
        {
            ctr = 1;
            break;
        }
    }
    if(ctr == 1)
        cout<<"Item found.";
    else
        cout<<"Item not found";
    return 0;
}