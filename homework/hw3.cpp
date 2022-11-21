#include <iostream>
using namespace std;
void table(int a, int b){
    if(a<=9){ //number a shouldn't be greater than 10
        if(b<9){ //when number b is 1~8
            cout<<a<<"*"<<b<<"="<<a*b<<" "; //use a space to separate each of them
            table(a,b+1); //next multiplicand is b+1 and multiplier is still a
        }else{ //change to next line when b is 9
            cout<<a<<"*"<<b<<"="<<a*b<<endl;
            table(a+1,1); //next multiplier is a+1 and multiplicand should start from 1
        }
    }
}
int main(){
    table(1,1); //start with one multiply by one
    return 0;
}