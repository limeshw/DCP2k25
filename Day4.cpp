#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void mergeTwo(vector<int>&v1 , vector<int>&v2){
    int i=v1.size()-1;
    int j=0;

    for(int k=0;k<v1.size()/2;k++){
        swap(v1[i],v2[j]);
        i--;
        j++;
    }
}

void printArr(vector<int>&arr){
    sort(arr.begin(),arr.end());

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>arr1 = {1, 3, 5, 7};
    vector<int>arr2 = {2, 4, 6, 8};

    // vector<int>arr1 = {1, 3, 5};
    // vector<int>arr2 = {2, 4, 6};

    // vector<int>arr1 = {2, 3, 8};
    // vector<int>arr2 = {4, 6, 10};

    // vector<int>arr1 = {1};
    // vector<int>arr2 = {2};

    mergeTwo(arr1,arr2);

    cout<<"arr1 : ";
    printArr(arr1);

    cout<<"arr2 : ";
    printArr(arr2);
}