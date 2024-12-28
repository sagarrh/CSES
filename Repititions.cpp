#include<algorithm>
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string thisone;
    cin>>thisone;
    int max1=0;
    int maxfinal=0;
    for(int i=0;i<thisone.size();i++){
        if(thisone[i]==thisone[i+1]){
            max1++;
        }else{
            max1=0;
        }
        maxfinal=max(max1,maxfinal);

    }
    cout<<maxfinal+1;
    return 0;
}