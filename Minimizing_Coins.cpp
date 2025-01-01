#include<iostream>
#include<vector>
#include<math.h>
#include<climits>

using namespace std;
int main(){
        long long a,b;
        cin>>a>>b;
        vector<long long> c(a);
        for(long long i=0;i<a;i++){
            cin>>c[i];
        }
        vector<long long> d(b+1,INT_MAX);
        d[0]=0;
        for(int i=1;i<=b;i++){
            for(long long coin: c){
                if( i-coin>= 0 && d[i-coin]!=INT_MAX ){
                    d[i]=min(d[i-coin]+1,d[i]);
                } 
            }
        }
        if(d[b]!=INT_MAX) cout<<d[b];
        else cout<<-1;
    return 0;
}