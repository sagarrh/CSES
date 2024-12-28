#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long a;
    cin>>a;
    for(long long i=1;i<=a;i++){
        long long power=pow(i,2);
        long long total=(power*(power-1))/2;
        long long total_total=total-4*(i-1)*(i-2);
        cout<<total_total<<" ";
    }
    return 0;
}