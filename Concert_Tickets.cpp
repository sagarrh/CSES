#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> tickets(n);
    vector<int> customers(m);
    set<pair<int,int>> sortedTickets;
    for(int i=0;i<n;i++){
        cin>>tickets[i];
        sortedTickets.insert({tickets[i],i});
    }
    for(int i=0;i<m;i++){
        cin>>customers[i];
    }
    for(int i=0;i<m;i++){
        auto match=sortedTickets.lower_bound({customers[i]+1,0});
        if(match==sortedTickets.begin()) cout<<-1<<endl;
        else{
            match--;
            cout<<match->first<<endl;
            sortedTickets.erase(match);
        }
    }

}


// int main(){    i tried doing it this way but it became very confusing....
//     int notickets,nocustomers;
//     cin>>notickets>>nocustomers;
//     vector<int> priceofeachticket(notickets);
//     vector<int> maxthatcanbepaidbythecustomer(nocustomers);
//     for(int i=0;i<notickets;i++){
//     cin>>priceofeachticket[i];
//     }
//     for(int i=0;i<nocustomers;i++) cin>>maxthatcanbepaidbythecustomer[i];
//     sort(priceofeachticket.begin(),priceofeachticket.end());
//     vector<bool> trueorfalse(notickets,false);
//     for(int i=0;i<nocustomers;i++){
//         int j=0;
//         while(maxthatcanbepaidbythecustomer[i]<priceofeachticket[j]){
//             j++;
//         }
//         trueorfalse[j]=true;
//         while(trueorfalse[j] && j>0){
//             j--;
//         }
//         cout<<priceofeachticket[j];
//     }



//     return 0;
// }