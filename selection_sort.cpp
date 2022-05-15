#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5];
    int n,temp;
    cout<<"Enter the number of elements : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i<<" : ";
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"The sorted array is : ";
    for(int i:arr){
        cout<<i<<" ";
    }
}