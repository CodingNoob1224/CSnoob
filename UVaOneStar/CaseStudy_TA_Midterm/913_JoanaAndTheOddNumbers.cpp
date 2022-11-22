#include <iostream>
using namespace std;
int main(){
    long long int n;
    while(cin>>n){
        cout<<((((n+1) * (n+1) / 4) - 1) * 2 - 1) * 3<<endl;
    }
    return 0;
}