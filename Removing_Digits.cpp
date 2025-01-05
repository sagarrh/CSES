#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int a;
    cin>>a;
    vector<int> b(a+1,10000000);
    b[0]=0;
    for(int i=1;i<a+1;i++){
        int temp= i;
        while(temp>0){
            b[i]=min(b[i],b[i-temp%10]+1);
            temp/=10;
        }
    }
    cout<< b[a];
}