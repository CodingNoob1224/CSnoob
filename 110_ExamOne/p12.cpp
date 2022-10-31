#include <iostream>
using namespace std;
int main(){
	while(true){
		int arr[100]={0};
		int index=0;
		while(scanf("%d",&arr[index++])!=EOF){
		}
		int count = index-1;
		int maxsize = 0;
		for(int i=0; i<count; i++){
			if(arr[i]>maxsize){
				maxsize = arr[i];
			}
		}
		char output[maxsize][count]={' '};
		for(int i=0; i<count; i++){
			for(int j=maxsize-1; arr[i]>0 && j>=0; j--, arr[i]--){
				output[j][i]='*';
			}
		}
		for(int i=0; i<maxsize; i++){
			for(int j=0; j<count; j++){
				if(output[i][j]=='*'){
					cout<<'*';
				}else{
					cout<<' ';
				}
			}
			cout<<endl;
		}
	}
	return 0;
} 
