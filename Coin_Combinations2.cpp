#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int numberofcoins,amount;
    cin>>numberofcoins>>amount;
    vector<int> coins(numberofcoins);
    for(int i=0;i<numberofcoins;i++) cin>>coins[i];
    vector<int> dp(amount+1,0);
    dp[0]=1;
    for(int i=0;i<numberofcoins;i++){
        for(int j=1;j<amount+1;j++){
            if(j>=coins[i]) dp[j]=(dp[j]+dp[j-coins[i]])%1000000007;   
        } 
    }
    cout<<dp[amount];
    return 0;
}