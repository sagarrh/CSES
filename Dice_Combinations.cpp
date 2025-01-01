#include<iostream>
#include<vector>
#include<math.h>
const int MOD = 1e9 + 7;
using namespace std;
int main(){
    int a;
    cin>>a;
    vector<int> a1(a+1,0);
    a1[0]=1;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=6;j++){
            if(i-j>=0) a1[i]=(a1[i]+a1[i-j])%MOD;
        }
    }
     cout<<a1[a];


}