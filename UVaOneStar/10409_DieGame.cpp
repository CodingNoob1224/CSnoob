#include <iostream>
using namespace std;

/*
    2
    1 4 6 3
    5
*/

int main(){
    int n;
    string s;
    while(cin>>n && n!=0){
        int arr[3][4];
        arr[0][0]=2;
        arr[1][0]=1; //top
        arr[2][0]=5;
        arr[1][1]=4;
        arr[1][2]=6;
        arr[1][3]=3;

        while(n--){
            cin>>s;
            if(s=="north"){
                int tmp = arr[2][0];
                arr[2][0]=arr[1][2];
                arr[1][2]=arr[0][0];
                arr[0][0]=arr[1][0];
                arr[1][0]=tmp;
            }else if(s=="east"){
                int tmp = arr[1][3];
                arr[1][3]=arr[1][2];
                arr[1][2]=arr[1][1];
                arr[1][1]=arr[1][0];
                arr[1][0]=tmp;
            }else if(s=="south"){
                int tmp = arr[0][0];
                arr[0][0]=arr[1][2];
                arr[1][2]=arr[2][0];
                arr[2][0]=arr[1][0];
                arr[1][0]=tmp;
            }else{
                int tmp = arr[1][1];
                arr[1][1]=arr[1][2];
                arr[1][2]=arr[1][3];
                arr[1][3]=arr[1][0];
                arr[1][0]=tmp;
            }
        }
        cout<<arr[1][0]<<endl;
    }
    return 0;
}