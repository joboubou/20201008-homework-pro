#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string input;
    getline(cin, input);
    string output;
    for (int i = 0; input[i] != '\0'; i++) {
        if (isalpha(input[i])) {
            if (i % 2 == 0 || i == 0) {
                putchar(toupper(input[i]));
            } else {
                putchar(tolower(input[i]));
            }
        } else {
            cout << input[i];
        }
    }
}
