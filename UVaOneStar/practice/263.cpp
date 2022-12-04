#include <iostream>
#include <algorithm>
using namespace std;
int arr[100];
int index = 0;
bool repeat(int num){
    for(int i=0; i<index; i++){
        if(arr[i]==num){
            return true;
        }
    }
    index++;
    return false;
}

long long int orinum(string str){
    int rt=0;
    int oriarray[str.length()]={0};
    for(int i=str.length()-1,m=1; i>=0; i--,m*=10){
        oriarray[i]=int(str[i])-48;
        rt+=oriarray[i] * m;
    }
    return rt;
}
long long int big(long long int num){
    int bigarray[10]={0};
    int cnt=0;
    long long int tmp=num;
    while(tmp>0){
        cnt++; 
        tmp/=10;
    }
    int bign=0;
    for(int i=cnt-1; i>=0; i--){
        bigarray[i]=num%10;
        num/=10;
    }
    sort(bigarray,bigarray+cnt,greater<int>());
    for(int i=cnt-1, j=1; i>=0; i--, j*=10){
        bign+=bigarray[i]*j;
    }
    //cout<<"bign is "<<bign<<endl;
    return bign;
}
long long int small(long long int num){
    int smallarray[10]={0};
    int cnt=0;
    long long int tmp=num;
    while(tmp>0){
        cnt++; 
        tmp/=10;
    }
    int smalln=0;
    for(int i=cnt-1; i>=0; i--){
        smallarray[i]=num%10;
        num/=10;
    }
    sort(smallarray,smallarray+cnt);
    for(int i=cnt-1, j=1; i>=0; i--, j*=10){
        smalln+=smallarray[i]*j;
    }
    //cout<<"smallnumber is "<<smalln<<endl;
    return smalln;
}

int main(){
    string s;
    while(cin>>s && s!="0"){
        index = 0;
        int chlen = 0;
        cout<<"orinum was "<<orinum(s)<<endl;
        long long int newnum;
        newnum=orinum(s);

        while(true){
            cout<<big(newnum)-small(newnum)<<endl;
            if(repeat(newnum) == true){
                break;
            }else{
                chlen++;
                newnum=big(newnum)-small(newnum);
            }
            cout<<newnum<<endl;

        }
        cout<<"chlen is"<<chlen<<endl;
    }
    return 0;
}