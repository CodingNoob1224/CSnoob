#include <iostream>
using namespace std;
int main(){
    int n;
    int r;
    while(cin>>n){
        while(n--){
            cin>>r;
            int arr[r];
            for(int i=0; i<r; i++){
                cin>>arr[i];
            }
            int count = 0;
            for(int i=r-1; i>0; i--){
                for(int j=0; j<i; j++){
                    if(arr[j]>arr[j+1]){
                        int tmp=arr[j+1];
                        arr[j+1]=arr[j];
                        arr[j]=tmp;
                        count ++;
                    }
                }
            }
            cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;
		}
    }
    return 0;
}