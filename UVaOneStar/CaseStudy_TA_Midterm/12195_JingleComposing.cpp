#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    while(cin>>s){
        if(s == "*"){
            break;
        }
        int beat = 0;
        int count = 0;
        for(int i=0; i<s.length(); i++){
            switch(s[i]){
                case 'W':
                    beat += 64;
                    break;
                case 'H':
                    beat += 32;
                    break;
                case 'Q':
                    beat += 16;
                    break;
                case 'E':
                    beat += 8;
                    break;
                case 'S':
                    beat += 4;
                    break;
                case 'T':
                    beat += 2;
                    break;
                case 'X':
                    beat+= 1;
                    break;
                case '/':
                    if(beat == 64){
                        count++;
                    }
                    beat=0;
                    break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}

/*
W: 64
H: 32
Q: 16
E: 8
S: 4
T: 2
X: 1
*/