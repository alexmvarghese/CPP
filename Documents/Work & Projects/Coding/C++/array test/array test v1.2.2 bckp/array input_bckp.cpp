#include<iostream>
using namespace std;
int main()
{
    int ra[25], n, i;
    cout<<"Welcome to array program. Max array size - 25. Build 1.2.2\n";   //Starting declaration
    cout<<"Enter the number of cells in the array.\n";                      //Entering number of cells
    cin>>n;
    cout<<"The array has "<<n<<" cells.\n";                                 //Number of cells output
    cout<<"Enter the elements into the array.";                             //Entering array elements
    for(i=0;i<n;i++)
        cin>>ra[i];
    cout<<"These are the elements of the array:";                           //Raw elements printed
    for(i=0;i<n;i++)
        cout<<ra[i]<<"\t";
    return 0;
}