#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void reverse(int arr[],int start,int end)
{
    while (start<end)
    {
        swap(&arr[start],&arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    cout<<"Enter Array:\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array after reversing: \n";
    reverse(arr,0,n-1);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}