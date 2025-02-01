#include<stdio.h>
#include<iostream>
#include<vector>

using namespace std;

// int main(){
//     int num;
//     cin>>num;
//     vector<int> score(num);
//     for(int i=0;i<num;i++){
//         cin>>score[i];
//     }
//     vector<pair<int, int>> DP(num);
//     DP[0].first=score[0];
//     DP[0].second=0;
//     for(int i=1;i<num;i++){
//         int temp =DP[i-1].second;
//         DP[i].second=DP[i-1].first;
//         DP[i].first=temp+score[i];
//     }
//     for(int i=0;i<num;i++){
//         cout<<DP[i].first<<"  "<<DP[i].second<<" "<<endl;
//     }

//     cout<<max(DP[num-1].first,DP[num-1].second);
//     return 0;
// }
int main(){
    int num;
    cin>>num;
    vector<long long> score(num);
    vector<vector<long long>> DP(num,vector<long long>(num));
    long long total =0;
    for(int i=0;i<num;i++){
        cin>>score[i];
        DP[i][i]=score[i];
        total+=score[i];
    }

    for(int i=num-1;i>=0;i--){
        for(int j = i+1;j<num;j++){
            long long firstelement= score[i]-DP[i+1][j];
            long long lastelement= score[j]-DP[i][j-1];
            DP[i][j]=max(firstelement,lastelement);
        }
    }
    cout<< (total+DP[0][num-1])/2;
    
}