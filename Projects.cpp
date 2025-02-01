#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int binarySearch(const vector<pair<pair<long long, long long>, long long>>& Arr, int currentIndex) {
    int low = 0, high = currentIndex - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (Arr[mid].first.second < Arr[currentIndex].first.first) {
            if (Arr[mid + 1].first.second < Arr[currentIndex].first.first) {
                low = mid + 1;
            } else {
                return mid;
            }
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    long long num;
    cin >> num;
    vector<pair<pair<long long, long long>, long long>> Arr(num);

    for (int i = 0; i < num; i++) {
        cin >> Arr[i].first.first >> Arr[i].first.second >> Arr[i].second;
    }

    
    sort(Arr.begin(), Arr.end(), [](const pair<pair<long long, long long>, long long>& a, const pair<pair<long long, long long>, long long>& b) {
        return a.first.second < b.first.second;
    });

    vector<long long> dp(num);
    dp[0] = Arr[0].second;

   
    for (int i = 1; i < num; i++) {
        
        long long excludeCurrent = dp[i - 1];

        
        int lastNonOverlap = binarySearch(Arr, i);
        long long includeCurrent = Arr[i].second + (lastNonOverlap == -1 ? 0 : dp[lastNonOverlap]);

       
        dp[i] = max(excludeCurrent, includeCurrent);
    }
    cout << dp[num - 1] << endl;
}
