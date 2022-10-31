#include <iostream>
using namespace std;
int main(){
	int arr[4][4];
	while(true){
		for(int i=0; i<4; i++){
			for(int j=0; j<4; j++){
				cin>>arr[i][j];
			}
		}
		for(int i=3; i>=0; i--){
			for(int j=3; j>=0; j--){
				printf("%2d ",arr[i][j]);
			}
			cout<<endl;
		}
		cout<<endl;
		
	} 
	return 0;
}
