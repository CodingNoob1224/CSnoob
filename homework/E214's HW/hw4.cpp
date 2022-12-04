#include <iostream>
using namespace std;
int output(int *one, int *two, int I){
    int count = 0;
    for(int i=0; i<I; i++){
        count += (*(one+i)) * (*(two+i));
    }
    return count;
}
int main(){
    int vector_size;
    cout<<"Please enter your vector size:"; //ask user what is the size of the vector
    cin>>vector_size;
    int vecone[vector_size],vectwo[vector_size];
    int *ptrone = vecone; //*ptrone store the address of array (named vecone)
    int *ptrtwo = vectwo; //*ptrtwo store the address of array (named vectwo)
    cout<<"please enter vecter one: ";
    for(int i=0;i<vector_size;i++){
        cin>>vecone[i]; //get the first vector from the user
    }
    cout<<"please enter vecter two: ";
    for(int i=0; i<vector_size; i++){
        cin>>vectwo[i]; //get the second vector from the user
    }
    //to calculate the inner product
    //call function by two array address and one integer (which is the size of those two vectors) 
    cout<<"inner product = "<<output(ptrone,ptrtwo, vector_size)<<endl;
    return 0;
}