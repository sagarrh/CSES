#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int INFINITY=1000000;
    int a,b;
    cin>>a>>b;
    vector<vector<int>> DP(505,vector<int>(505,INFINITY));
    for(int i=0;i<505;i++){
        DP[i][i]=0;
    }
    for(int w=1;w<=a;w++){
        for(int h= 1;h<=b;h++){
            for(int cut=1;cut<w;cut++){ // for variable width
                DP[w][h]=min(DP[w][h],DP[cut][h]+DP[w-cut][h]+1);
            }
            for(int cut =1;cut<h;cut++){
                DP[w][h]=min(DP[w][h],DP[w][cut]+DP[w][h-cut]+1);
            }
        }
    }
    cout<<DP[a][b];
    return 0;
}