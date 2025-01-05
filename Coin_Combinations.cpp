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
    for(int i=1;i<=amount;i++){     
        for(int j=0;j<numberofcoins;j++){
            if(i>=coins[j]) dp[i]=(dp[i]+dp[i-coins[j]])%1000000007; 
         }
    }
    cout<<dp[amount];
    return 0;
}