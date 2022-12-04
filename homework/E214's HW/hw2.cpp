#include <iostream>
using namespace std;

int PrintArrElement(int index, int total, int array[]){ //index means where's current value, total is total value
	if(index<=total){ 
		cout<<array[index]<<" ";
		PrintArrElement(index+1, total, array); //call the next value 
	}
}


int main(){
	int n;
	cout<<"How many elements do you want to store in the array? ";
	cin>>n; //n is the total input
	int arr[n]={0}; 
	for(int i=1; i<=n; i++){
		cout<<"The "<<i<<" element is : ";
		cin>>arr[i]; //key in each value and store each value in the array
	}
	cout<<"The elements in the array are : ";
	PrintArrElement(1, n, arr);//use the recursion function to print each value 
	cout<<endl;
	
	
	return 0;
}
