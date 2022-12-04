#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int cnt;
        cin>>cnt;
        int arr[cnt]={0};
        for(int i=0; i<cnt; i++){
            cin>>arr[i];
        }
        int times = 1000;
        while(times--){
            int k=arr[0];
            for(int i=0; i<cnt; i++){
                int j=i+1;
                if(j==cnt){
                    arr[i]=abs(arr[i]-k);
                }else{
                    arr[i]=abs(arr[i]-arr[j]);
                }
            }
        }
        bool loop = false;
        for(int i=0; i<cnt; i++){
            if(arr[i] != 0){
                loop = true;
                break;
            }
        }
        cout<<endl;
        if(loop == true){
            cout<<"LOOP\n";
        }else{
            cout<<"ZERO\n";
        }
    }
    return 0;
}