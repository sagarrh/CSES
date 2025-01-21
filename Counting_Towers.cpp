#include<iostream>
#include<algorithm>
#include<vector>

const int maxone= 1e6+10;
const int mod= 1e9+7;
using namespace std;
int main(){
    vector<vector<long long>> thisone(maxone,vector<long long>(8,0));
    for(int i=0;i<8;i++){
        thisone[0][i]=1;
    } 
    for(int i=1;i<maxone;i++){
        for(int j=0;j<8;j++){
            if(j==1 || j==4 || j==5 || j==6 || j==7){
                thisone[i][j]=(thisone[i-1][3]+thisone[i-1][5]+thisone[i-1][6]+thisone[i-1][7]+thisone[i-1][1])%mod;
            }
            else{
                thisone[i][j]=(thisone[i-1][4]+thisone[i-1][2]+thisone[i-1][0])%mod;
            }
        }
    }
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        cout<<(thisone[num-1][2]+thisone[num-1][1])%mod<<endl;
        // cout<<thisone[num-1][0]<<" "<<thisone[num-1][1]<<" "<<thisone[num-1][2]<<" "<<thisone[num-1][3]<<" "<<thisone[num-1][4]<<" "<<thisone[num-1][5]<<" "<<thisone[num-1][6]<<" "<<thisone[num-1][7];
    }
    
    return 0;
}