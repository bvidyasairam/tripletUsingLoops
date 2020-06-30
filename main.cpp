#include <iostream>

using namespace std;

int main()
{
    int arr1[100],n,sum,i,j,k,flagValue,flag=0;
    cout<<"Enter n\n";
    cin>>n;
    for(i = 0; i<n; i++)
    {
        cin>>arr1[i];
    }
    cout<<"\nEnter the sum value";
    cin>>sum;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            for(k=j+1; k<n; k++)
            {
                flagValue=arr1[i]+arr1[j]+arr1[k];
                if(flagValue==sum)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
        }
        if(flag==1)
                break;
    }
    cout<<"\n Triplets are\n";
    cout<<arr1[i]<<"\t"<<arr1[j]<<"\t"<<arr1[k];
    return 0;
}
