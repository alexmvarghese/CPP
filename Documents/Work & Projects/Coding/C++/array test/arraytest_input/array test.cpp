#include<iostream>
using namespace std;
int main()
{
    int ar[25];
    int n;
    int i;

    cout<<"This is array test.\n";
    cout<<"Enter the number of elements needed in the array: ";
    cin>>n;
    cout<<"Enter the elements in the array. Press Enter after each element.";
    for(i=0;i<n;i++)
        cin>>ar[i];
    cout<<"These are the array elements: ";
    for(i=0;i<n;i++)
        cout<<ar[i]<<" ";
    return 0;
}