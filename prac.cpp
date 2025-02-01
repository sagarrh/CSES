#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int MOD = 1e9+7;
int main(){
    vector<int> something={13,2,23,43,342};
    sort(something.begin(), something.end()); 
    
    auto it = lower_bound(something.begin(), something.end(), 30);
    cout << (it - something.begin()) << endl; 
    
    return 0;
}
