#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;

    string book[n];
    int money[n];
    for (int i = 0; i < n; i++) {
        cin >> book[i];
        cin >> money[i];
    }
    sort(money, money + n);
    stable_sort(book, book + n);
    
    for (int i = 0; i < n; i++) {
        cout << book[i] << " " << money[i] << "\n";
    }
}
