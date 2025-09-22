#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--){
      int n,m,i,p=0;
      cin>>n>>m;
      int a[n+1];
      int b[n+1];
      a[0]=b[0]=0;
      for(i=1;i<n+1;i++){
          cin>>a[i];
          cin>>b[i];
      }
      for(i=1;i<n+1;i++){
          if((a[i]-a[i-1])%2==abs(b[i]-b[i-1])){
              p=p+a[i]-a[i-1];
          }
          else{
              p=p+a[i]-a[i-1]-1;
          }
      }
    p=p+m-a[n];  
      cout<<p<<endl;
  }
  return 0;
}