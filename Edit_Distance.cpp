#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> thisone(5005,vector<int>(5005,0));

int main(){
    string a,b;
    cin>>a>>b;
    // vector<vector<int>> thisone(sizeof(a/4)+1,vector<int>(sizeof(b/4)+1,0));
    // for(int i=0;i<=sizeof(a/4);i++) thisone[0][i]=i;
    // for(int j=0;j<=sizeof(b/4);j++) thisone[j][0]=j;
    // for(int i=1;i<=sizeof(a/4);i++){
    //     for(int j=1;j<=sizeof(b/4);j++){
    //         if(a[i]==b[j]) thisone[i][j]=thisone[i-1][j-1];
    //         else{
    //             thisone[i][j]=min(thisone[i-1][j],thisone[i-1][j-1],thisone[i][j-1])+1;
    //         }
    //     }
    // }
    // cout<<thisone[sizeof(a/4)][sizeof(b/4)];

    for(int i=0;i<a.size();i++) thisone[i][0]=i;
    for(int j=0;j<b.size();j++) thisone[0][j]=j;

    for(int i=1;i<=a.size();i++){
        for(int j=1;j<=b.size();j++){
            if (a[i-1] == b[j-1]) {
                thisone[i][j] = thisone[i - 1][j - 1];
            } else {
                thisone[i][j] = min({thisone[i - 1][j], thisone[i][j - 1], thisone[i - 1][j - 1]}) + 1;
            }
        }
    }
    for(int i=0;i<=a.size();i++){
        for(int j=0;j<=b.size();j++){
           cout<<thisone[i][j]<<",";
        }
        cout<<endl;
    }

    cout<<thisone[a.size()][b.size()]<<endl;
}
// #include <iostream>
// #include <vector>
// #include <algorithm>

// #define INF 1e9  // A large value to represent infinity
// typedef long long ll;

// const int maxLen = 5005;  // Maximum length for the strings

// int minMoves[maxLen][maxLen];  // DP table to store the minimum moves

// int main() {
//     std::string str, ptr;
//     std::cin >> str >> ptr;  // Input the two strings

//     // Initialize the DP table for base cases
//     for (int i = 0; i <= ptr.length(); i++) {
//         minMoves[0][i] = i;  // If str is empty, all characters of ptr need to be inserted
//     }
//     for (int i = 0; i <= str.length(); i++) {
//         minMoves[i][0] = i;  // If ptr is empty, all characters of str need to be deleted
//     }

//     // Fill the DP table
//     for (int i = 1; i <= str.length(); i++) {
//         for (int j = 1; j <= ptr.length(); j++) {
//             // Cost of substitution (1 if characters are different, 0 otherwise)
//             int substitutionCost = (str[i - 1] != ptr[j - 1]);

//             // Recurrence relation
//             minMoves[i][j] = std::min({
//                 minMoves[i - 1][j - 1] + substitutionCost,  // Substitution
//                 minMoves[i - 1][j] + 1,                    // Deletion
//                 minMoves[i][j - 1] + 1                     // Insertion
//             });
//         }
//     }

//     // Output the result: minimum moves to transform str into ptr
//     std::cout << minMoves[str.length()][ptr.length()] << std::endl;

//     return 0;
// }
