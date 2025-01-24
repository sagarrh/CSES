#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int num;
    cin >> num;
    vector<int> coins(num);
    int totalSum = 0;

    for (int i = 0; i < num; i++) {
        cin >> coins[i];
        totalSum += coins[i];
    }

    vector<vector<int>> DP(num, vector<int>(totalSum + 1, 0));
    DP[0][0] = 1;
    DP[0][coins[0]] = 1;

int sum=0;
    for (int i = 1; i < num; i++) {
        for (int j = 0; j <= totalSum; j++) {
            if (DP[i - 1][j]) {
                DP[i][j] = 1;
                DP[i][j + coins[i]] = 1;
            }
            if(i==num-1 && DP[i][j]){
                sum++;
            }
        }
    }

    if(sum-1 !=-1) cout << sum-1 << endl;
    else cout<<1<<endl;
    for (int i = 1; i <= totalSum; i++) {
        if (DP[num - 1][i]) {
            cout << i << " ";
        }
    }

    return 0;
}
