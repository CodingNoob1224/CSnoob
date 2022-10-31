#include <iostream>
using namespace std;
int main(){
	int a, b, c;
	while(cin>>a>>b>>c){
		float ans = float((a+b)*c)/2;
		cout<<ans<<endl;
	}
}
