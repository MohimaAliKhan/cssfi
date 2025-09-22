
#include <iostream>
using namespace std;

int main() {
    int 
    long long n,i=0, max=0;
    cin>>n;
    long long arr[n];
    for(i;i<n;i++){
        cin>>arr[i];
    }
    i=1;
    while(i<n){
       if(arr[i]<arr[i-1]){
           max=max+arr[i-1]-arr[i];
           arr[i]=arr[i-1];
       }
        i++;
    }
    cout<<max;
    return 0;
}