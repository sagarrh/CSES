#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> applicants(n);
    vector<int> apartments(m);
    for(int i=0;i<n;i++) cin>>applicants[i];
    for(int i=0;i<m;i++) cin>>apartments[i];
    int count =0;
    sort(applicants.begin(),applicants.end());
    sort(apartments.begin(),apartments.end());
    for(int i=0,j=0;i<n && j<m;){
        // cout<<applicants[i]-apartments[j]<<" ";
        // cout<<"count is "<<count<<" ";
        if(abs(applicants[i]-apartments[j])>k){
            if(applicants[i]-apartments[j]>k){
                j++;
            }else{
                i++;
            }
            
        }
        else if(abs(applicants[i]-apartments[j])<=k){
            count+=1;
            i++;
            j++;
        }
    }
    cout<<count;
}