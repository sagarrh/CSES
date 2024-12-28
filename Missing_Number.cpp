#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    long long a;
    cin>>a;
    vector<int> b(a+1);
    vector<bool> c(a+1,0);

    for(int i=1;i<=a;i++){
        cin>>b[i];
    }
    // for(int i=1;i<10;i++) cout<< b[i]<<" "<<c[i]<<" ";
    for(int i=1;i<=a;i++){
        c[b[i]]=1;
    }
    int number=0;
    for(int i=1;i<=a;i++){
        if(c[i]==0){
            number = i;
        }
    }
    cout<<number;
    
}