#include<iostream>
using namespace std;
int main()
{
    int ra[25], n, i, j, min, pos;
    cout<<"Welcome to array program. Max array size - 25. Build 1.3.1a\n";   //Starting declaration
    cout<<"Enter the number of cells in the array.\n";                      //Entering number of cells
    cin>>n;
    cout<<"The array has "<<n<<" cells.\n";                                 //Number of cells output
    cout<<"Enter the elements into the array.";                             //Entering array elements
    for(i=0;i<n;i++)
        cin>>ra[i];
    cout<<"These are the elements of the array:\n";                         //Raw elements printed
    for(i=0;i<n;i++)
        cout<<ra[i]<<"\t";
    for(i=0;i<n-1;i++)                                                      //Selection sort
        {
            min=ra[i];
            pos=i;
            for(j=i+1;j<n;j++)
                if(ra[j]<min)
                    {
                        min=ra[j];
                        pos=j;
                    }
                if(pos!=i)
                    {
                        ra[pos]=ra[i];
                        ra[i]=min;
                    }
        }
    cout<<"\nSorted array is:\n";
    for(i=0;i<n;i++)
    cout<<ra[i]<<"\t";
    return 0;
}