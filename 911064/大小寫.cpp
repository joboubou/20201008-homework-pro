#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string input;
    cin >> input;
    string output;
    for (int i = 0; input[i] != '\0'; i++) {
        if (toupper(input[i]) >= 65 && toupper(input[i]) <= 90) {
            if (i % 2 == 0 || i == 0) {
                putchar(toupper(input[i]));
            } else {
                putchar(tolower(input[i]));
            }
        } else {
            continue;
        }
    }
}
