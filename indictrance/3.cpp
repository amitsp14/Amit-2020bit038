#include <iostream>
#include<bits/stdc++.h>

using namespace std;


void printFrequency(string str) {
    map<string, int> frequencyMap;
    stringstream ss(str);
    string word;

    while (ss >> word) {
        ++frequencyMap[word];
    }

    for (auto & pair : frequencyMap) {
        cout << pair.first << ": " << pair.second << endl;
    }
}

int main() {
    string str = "This is a sample text. This text is used for testing purposes";
    printFrequency(str);

    return 0;
}
