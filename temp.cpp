#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int notickets, nocustomers;
    cin >> notickets >> nocustomers;

    vector<int> priceofeachticket(notickets);
    vector<int> maxthatcanbepaidbythecustomer(nocustomers);

    
    for (int i = 0; i < notickets; i++) {
        cin >> priceofeachticket[i];
    }

    // Input max amounts customers can pay
    for (int i = 0; i < nocustomers; i++) {
        cin >> maxthatcanbepaidbythecustomer[i];
    }

    // Sort ticket prices in ascending order
    sort(priceofeachticket.begin(), priceofeachticket.end());

    // Sort customer budgets in ascending order
    sort(maxthatcanbepaidbythecustomer.begin(), maxthatcanbepaidbythecustomer.end());

    vector<bool> assigned(notickets, false); // Track which tickets are taken

    // Match each customer to the most expensive ticket they can afford
    for (int i = 0; i < nocustomers; i++) {
        int budget = maxthatcanbepaidbythecustomer[i];
        int ticket_index = -1;

        // Find the most expensive ticket within budget
        for (int j = notickets - 1; j >= 0; j--) {
            if (!assigned[j] && priceofeachticket[j] <= budget) {
                ticket_index = j;
                break;
            }
        }

        // Output the ticket price or -1 if no ticket is available
        if (ticket_index != -1) {
            cout << priceofeachticket[ticket_index] << endl;
            assigned[ticket_index] = true; // Mark this ticket as assigned
        } else {
            cout << "-1" << endl;
        }
    }

    return 0;
}
