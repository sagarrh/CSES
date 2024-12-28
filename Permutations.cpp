#include <iostream>
#include <vector>
using namespace std;

void beautifulPermutation(int a) {
    if (a == 2 || a == 3) {
        cout << "NO SOLUTION" << endl;  
        return;
    }

    
    for (int i = 2; i <= a; i += 2) {
        cout << i << " ";
    }
    
    for (int i = 1; i <= a; i += 2) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int a;
    cin >> a;

    beautifulPermutation(a);

    return 0;
}
