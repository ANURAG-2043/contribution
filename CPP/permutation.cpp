#include <iostream>
#include <algorithm>
using namespace std;

void printPermutations(string input) {
    sort(input.begin(), input.end());
    do {
        cout << input << endl;
    } while (next_permutation(input.begin(), input.end()));
}

int main() {
    string input;
    cin >> input;
    printPermutations(input);
    return 0;
}