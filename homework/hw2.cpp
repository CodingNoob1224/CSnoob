#include <iostream>
using namespace std;
void PrintArrElement(int index, int max_index, int arr[]){
    if(index != max_index){
        printf("%d ",arr[index]);
        PrintArrElement(index+1, max_index, arr);
    }else{
        return ;
    }
}
int main(){
    int n;
    while(cin>>n){
        int storage[n];
        for(int i=0; i<n; i++){
            cin>>storage[i];
        }
        PrintArrElement(0,n,storage);
    }
    return 0;
}