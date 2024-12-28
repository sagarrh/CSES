#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    long long a;
    cin>>a;
    while(a--){
        long long b,c;
        cin>>b>>c;
        long long m1=max(b,c);
        long long m2=m1*(m1-1)+1;
        if(m1%2==0){ //even
            if(b>c){
                m2+=abs(b-c);
            }else{
                m2-=abs(b-c);
            }
        }else{
            if(b<c){
                m2+=abs(b-c);
            }else{
                m2-=abs(b-c);
            }
            
        }
        cout<<m2<<" ";
    }
    return 0;
}