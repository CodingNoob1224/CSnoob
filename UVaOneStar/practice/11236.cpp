#include <iostream>
#include <cmath>
using namespace std;
int main(){
    // (one cent is 百分之一歐元)
    // A+B+C+D = A*B*C*D 
    // a=0.01A b=0.01B ...
    // 0.01(a+b+c+d) = 10^-8 (abcd)
    //10^6(a+b+c+d) = abcd

    for(int i=1; i<=2000; i++){
        for(int j=i; j<=2000-i; j++){
            for(int k=j; k<=2000-i-j; k++){
                for(int l=k; l<2000-i-j-k; l++){
                    if(   ((i+j+k+l)*pow(10,6)) == i*j*k*l   ){
                        printf("%.2f  %.2f  %.2f  %.2f\n", float(i)/100,float(j)/100,float(k)/100,float(l)/100 );
                    }
                }
            }
        }
    }

    return 0;
}