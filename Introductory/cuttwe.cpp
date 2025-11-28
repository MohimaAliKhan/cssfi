// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,i,j=0,tamp,size=0,res=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==1){
                size++;
            }
        }
        int odd[size];
        cout<<size;
        if(size==0) cout<<0<<endl;
        else{
            for(i=0;i<n;i++){
                if(a[i]%2==1){
                    odd[j]=a[i];
                    j++;
                }
                else res+=a[i];
            }
            sort(odd, odd + size);
            for(i=size-1;i>=size-((size+1)/2);i--){
                res+=odd[i];
                cout<<odd[i];
            }
            cout<<res<<endl;
        }
    }

    return 0;
}



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a, odd;
        int res = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) res += a[i];
            else odd.push_back(a[i]);
        }

        int size = odd.size();
        if (size == 0) {
            cout << 0 << endl;
        } else {
            sort(odd.begin(), odd.end());
            for (int i = size - 1; i >= size - ((size + 1) / 2); i--) {
                res += odd[i];
                cout << odd[i] << " "; // print nicely
            }
            cout << res << endl;
        }
    }
    return 0;
}
