#include <iostream>
using namespace std;

int main() {
    int n, m;
    while(cin >> n >> m) {
        if(n < 2 || m < 2) {
            cout << "Boring!\n";
            continue;
        }
    int arr[40] = {};
    int Cnt = 0;
    while (n % m == 0) {
        arr[Cnt++] = n;
        n /= m;
    }
    if(n != 1)
        cout << "Boring! \n";
    else{
        for(int i=0; i<Cnt; ++i){
            cout<<arr[i]<<" ";
        }
        cout<<"1"<<endl;
    }
    }
    return 0;
}/*
#include <iostream>
using namespace std;
int main(){
    int a, b;
    while(cin>>a>>b){
        int arr[200000]={a,0};
        int index=1;
        int boring = false;
        while(a>1){
            arr[index] = a/b;
            a/=b;
            if(arr[index]!=1 && arr[index] % b != 0){
                boring = true;
                break;
            }
            index++;
        }
        if(boring == true){
            cout<<"Boring!\n";
        }
        else{
            for(int i=0; i<index; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}*/
