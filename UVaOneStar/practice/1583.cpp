#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    int num;
    while(t--)
    {
        cin>>num;
        bool found=false;
        int limit;
        if(num<10)
            limit=9;
        else if(num<100)
            limit=18;
        else if(num<1000)
            limit=27;
        else if(num<10000)
            limit=45;
        else
            limit=60;
        int total;
        for(int i=num-limit;i<=num;i++)
        {
            int sum=i;
            total=sum;
            while(sum!=0)
            {
                total+=sum%10;
                sum/=10;
            }
            if(total==num)
            {
                found=true;
                total=i;
                break;
            }
            total=0;
        }
        if(found)
            cout<<total<<endl;
        else
            cout<<"0\n";
    }
    return 0;
}

/*
#include <iostream>
using namespace std;
int main(){
    int n;
    int ans[100000]={0}; 
    for(int i=1; i<100000; i++){
        int tmp=i; //198
        int m=i; //198
        while(tmp>0){ 
            m+=tmp%10; //198+1+9+8 = 216
            tmp/=10;
        }
        //m=216, ans[m] = 198
        if(i<ans[m] || ans[m]==0){
            ans[m]=i;
        }
    }
    cin>>n;
        while(n--){
            int input;
            cin>>input;
            cout<<ans[input]<<endl;
        }
    
    return 0;
}
*/