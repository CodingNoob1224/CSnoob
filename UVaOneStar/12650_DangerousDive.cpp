#include <iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int arr[n+1]={0};
        int s;
        cin>>s;
        while(s--){
            int back;
            cin>>back;
            arr[back]++;
        }
        bool flag = true;
        for(int i=1; i<=n; i++){
            if(arr[i]==0){
                cout<<i<<" ";
                flag = false;
            }

        }
        if(flag == true){
            cout<<'*'<<endl;
        }else{
            cout<<endl;
        }
        
    }
    return 0;
}