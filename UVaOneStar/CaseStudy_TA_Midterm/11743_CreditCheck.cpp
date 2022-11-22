#include <iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        while(n--){
            int arr[16]={0};
            for(int i=0; i<13; i+=4){ //0、4、8、12
                int num;
                cin>>num;
                for(int j=i+3; j>=i; j--){
                    arr[j]=num%10;
                    num/=10;
                }
            }
            int count = 0;
            for(int i=0; i<16; i++){
                if(i%2==0){
                    arr[i]*=2;
                }
                while(arr[i]>0){
                    count += arr[i]%10;
                    arr[i]/=10;
                }
            }
            if(count % 10 == 0){
                cout<<"Valid"<<endl;
            }else{
                cout<<"Invalid"<<endl;
            }
        }
    }
    
    return 0;
}