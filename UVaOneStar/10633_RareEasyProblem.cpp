#include <iostream>
using namespace std;
/*
input: X=N-M
N=10M+d
X=9M+d
M=(X-d)/9
求N的所有可能
*/
int main(){
    long long int X;
    while(cin>>X && X!=0){
        for(int d=9; d>=0; d--){
            if((X-d)%9==0){
                long long int M = (X-d)/9;
                X=9*M + d;
                cout<<X+M<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}