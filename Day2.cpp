#include<iostream>
#include<vector>
using namespace std;

int missingNum(vector<int>&v , int n){
    for(int i=0;i<n;i++){
        if(v[i] != i+1) return i+1;
    }
    return n+1;
}
int main(){
    // vector<int>v = {1, 2, 4, 5};
    vector<int>v = {1, 2, 3, 4};
    int n = v.size();
    cout<<"missing number is : "<<missingNum(v,n);
}