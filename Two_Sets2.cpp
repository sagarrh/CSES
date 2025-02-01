#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int MOD = 1e9+7;

int main(){
    int num;
    cin >> num;
    long long limit = (num * (num + 1)) / 4;
    int limit2 = (num * (num + 1)) / 2;   
    if (limit * 2 != limit2) {
        cout << 0;
        return 0;
    }
    vector<long long> DP(limit + 1, 0);
    DP[0] = 1;  
    
    for (int i = 1; i < num; i++) {
        for (int j = limit; j >= i; j--) {
            DP[j] = (DP[j] + DP[j - i]) % MOD;
        }
    }   
    cout << DP[limit] << endl;
    return 0;
}
