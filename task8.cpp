#include <iostream>
#include <string> // including the <string> library to manipulate the text and pattern
using namespace std;

int findingSubstring(string text, string pattern) {
    if (pattern.size() == 0)
        return -1;
    
    
    for (int i = 0; i <= text.size() - pattern.size(); i++) {
        int j = 0;
        // Checking each letter of pattern in the text
        while (j < pattern.size() && text[i + j] == pattern[j]) {
            j++;
        }
        if (j == pattern.size()) {
            return i;
        }
    }
    return -1;
}

int main() {
    string text, pattern;

    cout << "Enter the text: ";
    // Using getline instead of cin to account for spaces
    getline(cin, text); 

    cout << "Enter the pattern: ";
    getline(cin, pattern);

    int result = findingSubstring(text, pattern);

    if (result == -1)
        cout << "Pattern was not found." << endl;
    else
        cout << "Pattern is found at index: " << result << endl;

    return 0;
}
