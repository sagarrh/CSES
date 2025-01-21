#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int mod = 1e9 + 7;
int main()
{
    int a, b;
    cin >> a >> b;
    vector<int> arr(a, 0);
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    vector<vector<long long>> DP(a, vector<long long>(b + 1, 0));
    if (arr[0] == 0)
    {
        for (int i = 1; i <= b; i++)
        {
            DP[0][i] = 1;
        }
    }
    else
    {
        DP[0][arr[0]] = 1;
    }

    for (int i = 1; i < a; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = 1; j <= b; j++)
            {
                if (j - 1 >= 1)
                {
                    DP[i][j] = (DP[i][j] + DP[i - 1][j - 1]) % mod;
                }
                DP[i][j] = (DP[i][j] + DP[i - 1][j]) % mod;
                if (j+1<=b)
                {
                    DP[i][j] = (DP[i][j] + DP[i - 1][j + 1]) % mod;
                }
            }
        }
        else
        {
            if (arr[i] - 1 >= 1)
            {
                DP[i][arr[i]] = (DP[i][arr[i]] + DP[i - 1][arr[i] - 1]) % mod;
            }
            DP[i][arr[i]] = (DP[i][arr[i]] + DP[i - 1][arr[i]]) % mod;
            if (arr[i] + 1 <= b)
            {
                DP[i][arr[i]] = (DP[i][arr[i]] + DP[i - 1][arr[i] + 1]) % mod;
            }
        }
    }
    long long total = 0;
    for (int i = 1; i <= b; i++)
    {
        total = (total + DP[a - 1][i]) % mod;
    }
    cout << total;
    return 0;
}