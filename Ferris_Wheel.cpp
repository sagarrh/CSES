#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    vector<int> c(a);
    for(int i=0;i<a;i++) cin>>c[i];
    sort(c.begin(),c.end());
    int i=0,j=a-1;
    int gond=0;
    while(i<=j){
        if(c[i]+c[j]<=b){
            i++;
            
            }
        j--;
        gond++;
        
        
    }
    cout<<gond;

}