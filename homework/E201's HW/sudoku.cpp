#include <iostream>
using namespace std;
int sudoku[9][9]={0};
void input(){
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cin>>sudoku[i][j];
        }
    }
    return;
}
void solve(){
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(sudoku[i][j]!=0){

            }
        }
    }
    return;
}
void output(){
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cout<<sudoku[i][j]<<" ";
            if(j==2 || j==5){
                cout<<" | ";
            }

        }
        cout<<endl;
        if(i==2 || i==5){
            cout<<"------------------------"<<endl;
        }
    }
    return;
}
int main(){
    while(1){
        input();
        solve();
        output();
    }
    return 0;
}