#include <iostream>
using namespace std;
int main(){
    int a, b;
    while(cin>>a>>b && (a!=0 || b!=0)){
        int ans = 0;
        int next=0;
        while(a>0 || b>0){
            if((a%10 + b%10 + next)>=10){
                next=1;
                ans++;
            }else{
                next=0;
            }
            a/=10;
            b/=10;
        }
        if(ans==0){
            cout<<"No carry operation.\n";
        }else if(ans==1){
            cout<<"1 carry operation.\n";
        }else{
            cout<<ans<<" carry operations.\n";
        }
    }
    return 0;
}