#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    long long a;
    cin>>a;
    // cout<<a<<"i dont knowww"<<endl;
    long long tot=0;
    for(long long i=1;i<=a;i++){
        tot+=i;
    }
    if(tot%2==0){
        cout<<"YES"<<endl;
        long long inc=0;
        long long final=tot/2;
        vector<bool> b(a,false);
        // cout<<final<<"i dont knowww"<<endl;
        for(long long i=a;i>0;i--){
            if(final>=i){
                // cout<<i<<"i dont knowww"<<endl;
                final-=i;
                inc++;
                b[i]=true;
            }else{
                //cout<<i<<"i dont knowww"<<endl;
                continue;
            }
           
        }
        cout<<inc<<endl;
        for(long long i=1;i<=a;i++){
            if(b[i]) cout<<i<<" ";
        }
        
        cout<<endl<<a-inc<<endl;

        for(long long i=1;i<a;i++){
            if(!b[i]) cout<<i<<' ';
        }
    }
    else{
        cout<<"NO";
    }

}