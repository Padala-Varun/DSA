#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin >>n;
    cout<<"Enter the elements of the array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)    
        cin>>arr[i];
    
    
    int hasharr[13]={0};
    for(int i=0;i<n;i++)
    {
    hasharr[arr[i]]+=1;
    }

    int a;
    cout<<"how many numbers you want to search in the array?"<<endl;
    cin>>a;
    while(a--)
    {
        cout<<"Enter the number you want to search in the array"<<endl;
        int num;
        cin>>num;
        cout<<"The number "<<num<<" is present "<<hasharr[num]<<" times in the array."<<endl;
    }

    
    
}