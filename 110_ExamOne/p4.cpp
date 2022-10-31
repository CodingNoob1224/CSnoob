#include <iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		switch(n){
			case 80 ... 100:
				cout<<'A'<<endl;
				break;
			case 60 ... 79:
				cout<<'B'<<endl;
				break;
			case 40 ... 59:
				cout<<'C'<<endl;
				break;
			default:
				cout<<'D'<<endl;
				break; 
		}
	}
	return 0;
}
