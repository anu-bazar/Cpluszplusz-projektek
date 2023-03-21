#include <iostream>

using namespace std;

int main() {
    char letter = 'A';
    int ascii_value = letter;

    cout << "The ASCII value of " << letter << " is " << ascii_value << endl;

    return 0;
}

//REVISED
#include <iostream>

using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    cout << "The ASCII values of the characters in the string are: ";
    for (int i = 0; i < input.length(); i++) {
        int ascii_value = input[i];
        cout << ascii_value << " ";
    }

    return 0;
}

