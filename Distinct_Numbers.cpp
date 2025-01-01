#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
in main(){
    long long a;
    cin>>a;
    vector<long long> newarr(a);
    for(long long i=0;i<a;i++) cin>>newarr[i];
    sort(newarr.begin(), newarr.end());
    long long count = 1;
    for(long long i = 1; i < a; i++){
        if(newarr[i] != newarr[i-1]) count++;
    }
    cout << count;
}
