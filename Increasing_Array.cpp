#include<algorithm>
#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a;
    cin>>a;
    vector<long long> b(a);
    long long sum=0;
    long long max1=b[0];
    for(int i=0;i<a;i++){
        cin>>b[i];
        max1=max(b[i],max1);
        if(b[i]<max1) sum+=(max1-b[i]);
    }
    cout<<sum;
    return 0;


}