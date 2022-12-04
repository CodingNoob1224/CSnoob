#include <iostream>
using namespace std;
int sudoku[9][9];
void input(){
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			cin>>sudoku[i][j];
		}
	}
	return;
}
		
bool check(int arr[9][9], int num, int row, int col){
	switch (row){
		case 0 ... 2:
			switch (col){
				case 0 ... 2:
				case 3 ... 5:
				case 6 ... 8:
			}
		case 3 ... 5:
			switch (col){
				case 0 ... 2:
				case 3 ... 5:
				case 6 ... 8:
			}
		case 6 ... 8:
			switch (col){
				case 0 ... 2:
				case 3 ... 5:
				case 6 ... 8:
			}
			
	}
	return ;
}
//i is row, j is col
void solve(){
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			if(sudoku[i][j]!=0){
				for(int k=1; k<=9; k++){
					sudoku[i][j]=k;
					if(check(sudoku, k, i, j)==true){
						break;
					}
				}
			}
		}
	}
}

void output(){
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			cout<<sudoku[i][j];
			if(j==2 || j==5){
				cout<<"|";
			}
		}
		cout<<endl;
		if(i==2 || i==5){
			cout<<"-----------";
		    cout<<endl;
		}
	}
	return;
}
int main(){
	input();
	output();
	return 0;
}
