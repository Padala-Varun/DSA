#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)    
        cin>>arr[i];
    cout<<"Give a number to find how many times it is present in the array"<<endl;
    int num;
    cin>>num;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        count++;
    }
    cout<<"The number "<<num<<" is present "<<count<<" times in the array."<<endl;
}