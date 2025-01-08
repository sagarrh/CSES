#include <vector>
#include <iostream>
#include <map>
using namespace std;

int main() {
    

    long long a, b;
    cin >> a >> b;
    vector<long long> arr(a);

    for (long long i = 0; i < a; i++) {
        cin >> arr[i];
    }

    map<long long, long long> numsmap;

    for (long long i = 0; i < a; i++) {
        long long complement = b - arr[i];
        if (numsmap.count(complement)) {
            cout << numsmap[complement] + 1 << " " << i + 1;
            return 0;
        }
        numsmap[arr[i]] = i;
    }

    cout << "IMPOSSIBLE";
    return 0;
}
