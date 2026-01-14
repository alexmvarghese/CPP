#include<iostream>
using namespace std;
int main()
{
    int ra[24], n, i, j, temp;
    int target, beg = 0, mid, result = 1;
    int flag = 0;
    cout<<"Welcome to array program. Max array size - 25. Build 1.3b\n";    //Starting declaration
    cout<<"Enter the number of cells in the array.\n";                      //Entering number of cells
    cin>>n;
    cout<<"The array has "<<n<<" cells.\n";                                 //Number of cells output
    cout<<"Enter the elements into the array.\n";                             //Entering array elements
    for(i=0;i<n;i++)
        cin>>ra[i];
    cout<<"Enter a target value:";
    cin>>target;
    for(i=1;i<n;i++)                                                        //Bubble sorting logic
        for(j=0;j<n-1;j++)
            if(ra[j]>ra[j+1])
                {
                    temp=ra[j];
                    ra[j]=ra[j+1];
                    ra[j+1]=temp;
                }
    int end = (n-1);                //setting end value
    for(i=0;i<n;i++)
        if(beg <= end)              //checking if begin value is less than end
        {
            mid = (beg+end)/2;      //setting mid value
            if(ra[mid] < target)    //checking if cell of the mid value is less than target value
                {
                    beg = mid+1;    //updating mid value
                    result = mid;
                }
            else if(ra[mid] > target)
                {
                    end = mid -1;
                    result = mid;
                }
            else if(ra[mid] = target)
                {
                    flag = 1;
                    break;
                }
            else
                end = mid-1;
        }
        else
            int flag = 2;
    if(flag == 1)
        cout<<"\nSearch successful."<<" "<<target<<" found in array.";
    else if(flag == 0)
        cout<<"\nSearch unsuccessful."<<" "<<target<<" not found in array.";
    else
        cout<<"\nSearch error.";
    return 0;
}