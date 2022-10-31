#include <iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		int count = 0;
		int i=5;
		while(i<=n){
			count+=i;
			i+=5;
		}
		cout<<count<<endl;
	}
} 
