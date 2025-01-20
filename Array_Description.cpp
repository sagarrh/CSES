#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    vector<int> arr(a,0);
    for(int i=0;i<a;i++){
        cin>>a[i];
    }

    vector<vector<long long>> DP(a,vector<long long>(b+1,0));
    if(arr[0]==0){
        for(int i=1;i<=b;i++){
            DP[0][i]=1;
        }
    }else{
        DP[0][arr[0]]=1;
    }

    for(int i=1;i<b;i++){
            if(arr[i]==0){
                for(int j=1;j<=b;j++){
                    
                }
            }
    }
    return 0;
}