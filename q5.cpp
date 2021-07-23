#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int n,i,j;
    cin>>n;
    int arr[n];
    cout<<"Enter array:\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    j=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            if(i!=j)
            {
                swap(&arr[i],&arr[j]);
            }
            j++;
        }
    }
    cout<<"Required Array:\n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\n";
    }
}
