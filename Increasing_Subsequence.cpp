#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> subsequence;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        for(int j=0;j<subsequence.size();j++) cout<<subsequence[j]<<" ";
        cout<<endl;
        int index = lower_bound(subsequence.begin(),subsequence.end(),val)-subsequence.begin();
        if(index == subsequence.size()){
            subsequence.push_back(val);
        }
        else{
            subsequence[index ]=val;
        }

    }
    cout<<subsequence.size();
    return 0;
}