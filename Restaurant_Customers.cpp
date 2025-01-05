#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> events;
    for(int i=0;i<n;i++){
        int start,end;
        cin>>start>>end;
        events.push_back({start,1});
        events.push_back({end,-1}); 
    }
    sort(events.begin(),events.end());
    int actualcustomers=0;
    int maxcustomers=0;
    for(int i=0;i<events.size();i++){
        actualcustomers+=events[i].second;
        maxcustomers=max(maxcustomers,actualcustomers);
    }
    cout<<maxcustomers;
    return 0;

}
// int main(){  //approach is correct but time consuming 
//     int n;
//     cin>>n;
//     vector<pair<int,int>> times(n);
//     for(int i=0;i<n;i++){
//         cin>>times[i].first>>times[i].second;
//     }
//     vector<int> ctime(10000007);
//     for(int i=0;i<n;i++){
//         int start= times[i].first;
//         while(start<=times[i].second){
//             ctime[start]++;
//             start++;
//         }
//     }
//     cout << *max_element(ctime.begin(), ctime.end());
//     return 0;
    
// }