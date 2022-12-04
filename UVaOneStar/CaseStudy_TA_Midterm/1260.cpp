#include <iostream>
using namespace std;
bool found (int array[], int b, int c){
    for(int i=0; i<c; i++){
        if(b==array[i]){
            return true;
        }
    }

}
int main(){
    int n;
    cin>>n;
    while(n--){
        int j;
        cin>>j;
        int arrA[j+1]={0};
        for(int i=1; i<=j; i++){
            cin>>arrA[i];
        }
        int arrB[j+1]={0};//0 1 2 3 4 5
        
        for(int i=2; i<=j; i++){
            int small=5000;
            int index;
            bool alreadyFound=false;
            for(int k=i-1; k>0; k--){
                if(found(arrA,arrA[i], k)){
                    alreadyFound=true;
                    index=k;
                    cout<<"found "<<k<<endl;
                    break;
                }
            }
            if(!alreadyFound){
                for(int k=i-1; k>0; k--){
                    if(arrA[k]<arrA[i]){
                        if(arrA[k]<5000){
                            index=k;
                            small=arrA[k];
                            cout<<k<<" ";
                        }
                    }
                }
                arrB[i]=index;
            }
        }
        int count = 0;

        for(int i=2; i<=j; i++){
            count+=arrB[i];
        }
        cout<<count<<endl;
    }
        
    
    return 0;
}