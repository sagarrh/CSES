#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
// int main(){   was suppose to take median  :(
//     int l;
//     cin>>l;
//     vector<int> arr(l);
//     int avg=0;
//     for(int i=0;i<l;i++){
//         cin>>arr[i];
//         avg+=arr[i];
//     }
//     int avg1=(int)(avg/l);
//     if(abs(avg1-avg)>0.5){
//         avg1++;
//     }
//     int returnthis=0;
   
//     for(int i=0;i<l;i++){
//         returnthis=returnthis+abs(avg1-arr[i]);
        
//     }
//     cout<<returnthis;
//     return 0;
// }
int main(){   
    int l;
    cin>>l;
    vector<int> arr(l);
    for(int i=0;i<l;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int median = arr[l/2];
    long long cost=0;
    for(int a : arr){
        cost+=abs(median-a);
    }
    cout<<cost;
    return 0;
}
