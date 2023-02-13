#include <iostream>
#include <map>
#include <string>

using namespace std;

map<string, int> trie;

void addWord(string word) {
    for (int i = 1; i <= word.length(); i++) {
        trie[word.substr(0, i)]++;
    }
}

int findPartial(string partialWord) {
    return trie[partialWord];
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        string operation, word;
        cin >> operation >> word;

        if (operation == "add") {
            addWord(word);
        } else {
            cout << findPartial(word) << endl;
        }
    }

    return 0;
}
