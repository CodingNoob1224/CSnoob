#include <iostream>
using namespace std;
int main(){
	int arr[10];
	while(true){
		int count=0;
		for(int i=0; i<10; i++){
			cin>>arr[i];
			count+=arr[i];
		}
		cout<<count<<endl;
	}
	return 0;
}
	
