
#include<stdio.h>
#include<stdlib.h>
int main(){
    int ans[100000]={0};
    int N,M,i;
    //建立N=1~100000的digit-sum
    for(i=1;i<100000;i++){//N=i=198 M=216
        N=i;//2 +1+ 6
        M=i;//216
        while(N>0){
            
            M=M+N%10;
            N=N/10;
        }
        if(i<ans[M]||ans[M]==0)
        ans[M]=i;
    }
    //使用者輸入測資跟M
    int T,n;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        printf("%d\n",ans[n]);
    } 
    return 0;
}