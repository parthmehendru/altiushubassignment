#include<bits/stdc++.h>
using namespace std;

long long maxSS(int arr[], int n){
    long long maxi = LLONG_MIN;
    long long sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>maxi){
            maxi = sum;
        }
        if(sum<0){
            sum = 0;
        }
    }

    return maxi;

}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    long long maxs = maxSS(arr, n);
    cout<<maxs<<endl;
    return 0;

}