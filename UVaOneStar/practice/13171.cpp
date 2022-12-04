#include <iostream>
#include <string>
using namespace std;
int main(){
    int count;
    cin>>count;
    while(count--)
    {
        int c1=0,c2=0,c3=0;
        cin>>c1>>c2>>c3;
        string s="";
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
                switch(s[i])
            {
                case 'M': c1--; break;
                case 'Y': c2--; break;
                case 'C': c3--;  break;
                case 'R': c1--;c2--; break;
                case 'B': c2--;c3--;c1--; break;
                case 'G': c2--;c3--; break;
                case 'V': c1--;c3--; break;
                case 'W': break;
            }
        }
                  if(c1<0||c2<0||c3<0)
                      cout<<"NO"<<"\n";
                  else
                      cout<<"YES"<<" "<<c1<<" "<<c2<<" "<<c3<<"\n";
    }
    return 0;
}