#include <iostream>
using namespace std;
int main(){
	int n;
	while(true){
		int count = 0;
		while(cin>>n){
			if(n==-99){
				cout<<count<<endl;
				break;
			}else if(n%3==0){
				count += n;
			}
		}
	}
	return 0;
}
