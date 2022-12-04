#include<stdio.h>
#include<stdlib.h>

 

int main(){
    int T;//test case
    int i,j;
    int site,k;
    char str[1000];
    int ca=1;
    scanf("%d",&T);
    getchar();
    getchar();
    while(T--){
        printf("Case # %d:\n",ca++);
        while(gets(str)){
            if(str[0]=='\0')
            break;
            for(i=0,site=1,k=1;str[i]!='\0';i++,k++){
                if(str[i]==' ')//遇到空格 表示換下一個單字 
                k=0;
                if(k==site){
                    printf("%c",str[i]);
                    k++;
                    site++;
                }
            
            }
            printf("\n");
        }
    }
     
 return 0;
}