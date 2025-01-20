#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    vector<int> prices(a);
    vector<int> pages(a);
    for(int i=0;i<a;i++){
        cin>>prices[i];
    }
    for(int i=0;i<a;i++){
        cin>>pages[i];
    }
    vector<vector<int>> DP(a+1,vector<int>(b+1,0));
    for(int i=0;i<a;i++){
        for(int j=0;j<=b;j++){
            DP[i+1][j]=DP[i][j];
            if(j>=prices[i]){
                DP[i+1][j]=max(DP[i+1][j],DP[i][j-prices[i]]+pages[i]);
            }
        }
    }
    cout<<DP[a][b];
}