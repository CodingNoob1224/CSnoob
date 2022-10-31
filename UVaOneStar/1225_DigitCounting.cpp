#include <iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        while(n--){
            int input;
            cin>>input;
            int arr[10]={0};
            for(int i=1; i<=input; i++){
                int num = i;
                while(num>0){
                    arr[num%10]++;
                    num/=10;
                }
            }
            for(int i=0; i<10; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}