#include <iostream>
#include <set>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        for(int i=1; i<=n; i++){
            int input;
            cin>>input;
            cout<<"Case #"<<i<<": "<<input;
            set<int> st;
            while(input != 1){
                if(st.count(input)){
                    break;
                }
                st.insert(input);
                int sum = 0;
                while(input > 0){
                    sum+=(input%10)*(input%10);
                    input/=10;
                }
                input = sum;
            }
            if(input==1){
                cout<<" is a Happy number."<<endl;
            }else{
                cout<<" is an Unhappy number."<<endl;
            }
            
        }
    }
    return 0;
}