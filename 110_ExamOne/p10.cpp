#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		int ans=0;
		int i=0;
		while(n>0){
			ans+=(n%10)*pow(2,i);
			i++;
			n/=10;
		}
		cout<<ans<<endl;
	}
	return 0;
}
