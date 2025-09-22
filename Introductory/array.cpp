
#include <iostream>
#include<cstring>
using namespace std;
int main() {
  int t,n,i,a,b,c;
  
  cin>>t;
  while(t--){
      char res[]="Yes";
      cin>>n;
      int p[n];
      for(i=0;i<n;i++){
          cin>>p[i];
          if(p[i]==n){
              a=i;
              b=i;
          }
      }
     int steps = 1; 

        while (steps < n) {
            if (a > 0 && p[a - 1] == n - steps) {
                a--;
            }
            else if (b < n - 1 && p[b + 1] == n - steps) {
                b++;
            }
            else {
                strcpy(res,"No");
                break;
            }
            steps++;
        }
      cout<<res<<endl;
  }
    return 0;
}