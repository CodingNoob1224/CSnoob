#include <iostream>
using namespace std;
int count(int n){
    int s=1;
    while(n!=1){
        if(n%2 == 1){
            n=n*3+1;
        }else{
            n/=2;
        }
        s++;
    }
    return s;
}
int main(){
    int a, b;
    while(cin>>a>>b){
        int ans = 0;
        for(int i=min(a,b); i<=max(a,b);i++){
            if(count(i)>ans){
                ans = count(i);
            }
        }
        cout<<a<<" "<<b<<" "<<ans<<endl;
    }
    return 0;
}