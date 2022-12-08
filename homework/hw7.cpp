#include <iostream>
using namespace std;
void compute(int *a, int *b, int *c, int *d, float *e,int *f){
    for(int i=0; i<*f; i++){
        *b+=*(a+i); // compute sum
        if(*c < *(a+i)){
            *c = *(a+i); //determine maximum
        }
        if(*d > *(a+i)){
            *d = *(a+i); // determine minimum
        }
    }
    *e = float(*b) /float(*f); //compute average
}
int main(){
    int n;
    while(cout<<"enter an integer: " && cin>>n){ //let the user key-in the size of the array
        //set max and min be 0 and 100 respectively since elements are between 0~100 
        int arr[n],sum=0,max=0,min=100;
        float ave=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        //declare pointers representing the address of sum, max, min, size, and the arr, respectively.
        int *pt_sum=&sum, *pt_max=&max, *pt_min=&min,  *size=&n, *array = arr;
        //declare pointers representing the address of ave.
        float *pt_ave=&ave;
        //call the sub function to compute each value
        //pass by address
        compute(array,pt_sum,pt_max,pt_min,pt_ave,size); 
        //print out each value
        cout<<"Sum: "<<sum<<endl;
        cout<<"Max: "<<max<<endl;
        cout<<"Min: "<<min<<endl;
        cout<<"Ave: "<<ave<<endl;
    }
    return 0;
}