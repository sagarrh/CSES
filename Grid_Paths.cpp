#include<algorithm>
#include<iostream>
#include<math.h>
#include<vector>
const int mod = 1e9+7;
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> grid(n);
    for(int i=0;i<n;i++){
        cin>>grid[i];
    }
    vector<vector<long long>> numb(n,vector<long long>(n,0));
    if (grid[0][0] == '.') {
        numb[0][0] = 1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]!='*'){
                if(i>0){
                    numb[i][j]=(numb[i-1][j]+numb[i][j])%mod;
                }
                if(j>0){
                    numb[i][j]=(numb[i][j-1]+numb[i][j])%mod;
                }
            }
            
        }
    }
    cout<<numb[n-1][n-1];

    
}