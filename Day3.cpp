#include<iostream>
#include<vector>
using namespace std;

int DuplicateNum(vector<int>&v , int n){
    int total = n*(n-1)/2;
    int arrSum = 0;
    for(int i=0;i<n;i++){
        arrSum += v[i];
    }
    return arrSum-total;
}
int main(){
    vector<int>v = {1, 3, 4, 2, 2};
    // vector<int>v = {3, 1, 3, 4, 2};
    // vector<int>v = {1, 4, 4, 2, 3};
    // vector<int>v = {1,1};
    
    int n = v.size();
    cout<<"Duplicate number is : "<<DuplicateNum(v,n);
}