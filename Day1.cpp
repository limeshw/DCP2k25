#include<iostream>
using namespace std;

void sortArr(int* arr , int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {0, 1, 2, 1, 0, 2, 1, 0};
    // int arr[] = {2, 2, 2, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    sortArr(arr,n);
}