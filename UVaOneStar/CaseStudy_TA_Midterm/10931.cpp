#include <iostream>
using namespace std;
long long bin[10000];
int j=0;

int count(int a){
    int cnt=0;
    j=0;
    while(a>0){
        bin[j]=(a%2);
        if(a%2 == 1){
            cnt++;
        }
        a/=2;
        j++;
    }
    return cnt;
}

int main(){
    long long int n;
    while(cin>>n){
        j=0;
        cout<<"The parity of ";
        
        for(int i=j-1; i>=0; i--){
            cout<<bin[i];
        }
        
        cout<<" is "<<count(n)<<" (mod 2).\n";
    }
    return 0;
}