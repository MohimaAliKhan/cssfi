//A - Interesting drink
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,q,tamp;
    vector<int> a;
    vector <int> b;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>tamp;
        a.push_back(tamp);
    }
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>tamp;
        b.push_back(tamp);
    }
    
    for(int i=0;i<q;i++){
        tamp=0;
        for(int j=0;j<n;j++) {
            if(a[j]<=b[i]) tamp++;
        }
        cout<<tamp<<endl;
    }
    return 0;
}


//E - New Year's Number

#include <iostream>
using namespace std;
int main() {
   int t;
   cin>>t;
   while(t--){
       int n,m;
       cin>>n;
       m=n%2020;
       if(m<=n/2020) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   }
   

    return 0;
}
//Monocarp's String
#include <iostream>
#include<bits/stdc++.h>
#include <cmath>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        string s;
         cin>>n;
          cin>>s;
          vector<char>a,b;
          for (int i=0;i<n;i++){
              if(s[i]=='a') a.push_back(s[i]);
              else b.push_back(s[i]);
          }
          if(a.size()==b.size())cout<<-1<<endl;
          else cout<<max(a.size(),b.size())-min(a.size(),b.size())<<endl;
        
    }
    return 0;
}