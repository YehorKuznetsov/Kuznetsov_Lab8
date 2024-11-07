#include <iostream>
#include <map>
#include <string>
using namespace std;

map <char, int> countLetterOccurrences(const map<string, int> &inputMap) {
    map <char, int> letterCounts;
    for (const auto & it : inputMap) {
        const string& key = it.first;
        int value = it.second;

        for(size_t i = 0; i < key.length(); i++) {
            char c = key[i];
            letterCounts[c]++;
        }
    }
    return letterCounts;
}

int main() {
    map<string, int> inputMap= {
        {"Mathematics", 2},
        {"Geometry", 4},
        {"apple", 5}
    };

    map<char, int> result = countLetterOccurrences(inputMap);

    for(auto & it : result) {
        cout << it.first<<':' << it.second << ' ';
    }
}
