#include <iostream>
using namespace std;

int main() {
    int n=1,i=0,max=0;
    string dna;
    cin>>dna;
    while(dna[i]!='\0'){
        if (dna[i]==dna[i+1]){
            n++;
        }else{
            if(max<n){
                max=n;
            }
            n=1;
        }
        i++;
    }
    cout<<max;
    return 0;
}