#include <iostream>
using namespace std;
int main(){
	int start,a,b,c,ans;
	while(true){
		cin>>start>>a>>b>>c;
		if(start+a+b+c == 0)break;
		ans = (40*2 + (40+start-a)%40 + 40 + (40+b-a)%40 + (40+b-c)%40)*9;
		cout<<ans<<endl;
	}
	return 0;
}