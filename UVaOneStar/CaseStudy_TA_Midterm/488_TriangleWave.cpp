#include <iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        while(n--){
            int a, b;
            cin>>a>>b;
            cout<<endl;
            for(int i=0; i<b; i++){
                for(int j=1; j<=a; j++){
                    for(int k=1; k<=j; k++){
                        cout<<j;
                    }
                    cout<<endl;
                }
                for(int j=a-1; j>0; j--){
                    for(int k=j; k>0; k--){
                        cout<<j;
                    }
                    cout<<endl;
                }
                cout<<endl;
            }
        }
    }
    return 0;
}