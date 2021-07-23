#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void bubblesort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                swap(&arr[j],&arr[j+1]);
        }
    }

}
int main()
{
     int n,i,k;
    cin>>n;
    int arr[n];
    cout<<"Enter Array:\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubblesort(arr,n);
    cout<<"after:\n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    cout<<"Enter K:";
    cin>>k;
    cout<<"The kth largest element is: "<<arr[n-k]<<endl;
    cout<<"The kth smallest element is: "<<arr[k-1];

}