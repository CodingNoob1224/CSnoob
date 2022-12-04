#include <iostream>
using namespace std;
int accum(int);
int main(){
	int n; //n is the input
	while(cin>>n){ //when user key in the value
		cout<<"SUM = "<<accum(n)<<endl; //print the sum, use recursion function to calculate the accumulation of 1~n
	}
	return 0;
}
int accum(int num){
	if(num>1){ //when the number is greater than one, call accum(num-1)
		return (num+accum(num-1)); //the return value will be the accumulation of 1~n
		
	}else{ //if num == 1, return one
		return 1;
	}
}
