#include<algorithm>
#include<vector>
#include<iostream>

using namespace std;
bool cmp(pair<int,int> &a,pair<int,int> &b){
    return a.second< b.second;
}
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> movies(n);
    for(int i=0;i<n;i++){
        cin>>movies[i].first>>movies[i].second;
    }
    sort(movies.begin(),movies.end(),cmp);

    
    int start=0;
    int count=0;
    int i=0;
    while(i<n){
        if(movies[i].first>=start){
            start=movies[i].second;
            
            count++;
        }
        i++;
    }
    cout<<count;
    return 0;
}