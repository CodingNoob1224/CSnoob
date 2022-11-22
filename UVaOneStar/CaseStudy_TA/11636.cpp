#include <iostream>
using namespace std;
int main(){
	int n;
	int x=1;
	while(1){
		cin>>n;
		if(n<0)break;
		int cnt = 0;
		for(n--; n>0; n/=2){
			cnt++;
		}
		cout<<"Case "<<x++<<": "<<cnt<<endl; 
	}
	return 0;
}