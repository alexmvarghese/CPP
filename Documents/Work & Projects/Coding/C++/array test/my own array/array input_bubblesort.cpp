#include<iostream>
using namespace std;
int main()
{
    int ra[8], n, i, j, temp;
    cout<<"Welcome to array program. Max array size - 25. Build 1.3b\n";    //Starting declaration
    cout<<"Enter the number of cells in the array.\n";                      //Entering number of cells
    cin>>n;
    cout<<"The array has "<<n<<" cells.\n";                                 //Number of cells output
    cout<<"Enter the elements into the array.\n";                             //Entering array elements
    for(i=0;i<n;i++)
        cin>>ra[i];
    cout<<"These are the elements of the array:\n";                           //Raw elements printed
    for(i=0;i<n;i++)
        cout<<ra[i]<<"\t";
    for(i=1;i<n;i++)                                                        //Bubble sorting logic
        for(j=0;j<n-1;j++)
            if(ra[j]>ra[j+1])
                {
                    temp=ra[j];
                    ra[j]=ra[j+1];
                    ra[j+1]=temp;
                }
    cout<<"\nSorted array is:\n";
    for(i=0;i<n;i++)
        cout<<ra[i]<<"\t";
    return 0;
}