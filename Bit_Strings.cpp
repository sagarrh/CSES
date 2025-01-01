#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    long long a;
    cin>>a;
    long long b=1;
    while(a--) b=(b*2)%(1000000007);
    cout<<b;
    return 0;

}