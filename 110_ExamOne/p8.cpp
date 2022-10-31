#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		for(int i=2; i<=n; i++){
			bool is_prime=1;
			for(int j=2; j<=sqrt(i);j++){
				if(i%j==0){
					is_prime = 0;
					break;
				}
			}
			if(is_prime){
				cout<<i<<" ";
			}
		}
		cout<<endl;
	} 
}
