#include <iostream>
using namespace std;
int main(){
    int a, b,an=0,bn=0;
    while(true){
        cin>>a>>b;
        if(a==0 && b==0)
			break;
        int arrA[a]={0};
        int arrB[b]={0};
        for(int i=0; i<a; i++){
            cin>>arrA[i];
            if(i>0 && arrA[i]==arrA[i-1])
                arrA[i-1]=0;
        }
        for(int i=0; i<b; i++){
            cin>>arrB[i];
            if(i>0 && arrB[i]==arrB[i-1])
                arrB[i-1]=0;
        }

        for(int i=0, j=0; i<a&&j<b;){
            if(arrA[i]==arrB[j]){
                arrA[i]=0;
                arrB[j]=0;
                i++,
                j++;
            }else{
                if(arrA[i]>arrB[j]){
                    j++;
                }else{
                    i++;
                }
            }
        }
        for (int i = 0;i < a; i++){
            if (arrA[i] > 0)
                an++;
        }
        for (int i = 0;i < b; i++){
            if (arrB[i] > 0)
                bn++;
    	}
		if(an>bn)
        printf("%d\n",bn);
        else
        printf("%d\n",an);


    }
    return 0;
}


/*

TA version

#include <stdio.h>
#include<stdlib.h>
 int main(){
 int m,n;//卡牌長度

 while(1){
     scanf("%d %d",&m,&n);
     if(m+n==0)break;//卡牌數都為零就break
    
     int a[m],b[n];//卡牌陣列
    int acnt=0,bcnt=0;//計算對方沒有卡牌的數量
    int i,j;
    //Step1 將數列一樣的數設為零
    for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
        if(i>0&&a[i]==a[i-1])
        a[i-1]=0;       
    }
    for(int j=0;j<n;j++){
        scanf("%d",&b[j]);
        if(j>0&&b[j]==b[j-1])
        b[j-1]=0;
    }
    //Step2 將兩數列相同的數設為零
    for(int i=0,j=0;i<m&&j<n;){
        if(a[i]==b[j]){ //相同就設為零並將索引值同時增加
            a[i]=0;
            b[j]=0;
            i++;j++;
        }
    else{
            if(a[i]<b[j])//將數字較小的數列索引值增加直到等於或大於
            	i++;
            else
            	j++;
        }
	}
    //Step3 計算兩數列大於零的數字個數取較少的輸出
    for(i=0;i<m;i++){
        if (a[i]>0)
        acnt++;
    }
     for(i=0;i<n;i++){
        if (b[i]>0)
        bcnt++;
    }
    if(acnt>bcnt)
    printf("%d\n",bcnt);
    else
    printf("%d\n",acnt);   
 }

 return 0;
 }
*/