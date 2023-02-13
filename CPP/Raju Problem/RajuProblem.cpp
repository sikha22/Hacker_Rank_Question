// Problem Statement:

// Raju is aiming to get good score in National Memory Test and he is surfing through internet to find out different ways of memorizing the words. He found that jotting down words and recollection is the best way to remember. You have to help Raju in creating an application which will store words and help him in remembering the words better.

// The word application has to perform two operations:

// 1) add word: where a word is a string which denoting the National Memory Test word.This add operation must store word as a new Test word in the application.
// 2)find partialWord, a string denoting a partial word to search the application. It must count the number of Test words starting with partialWord and print the count on a new line.

// Given P sequential add and find operations, perform each operation in order.

// Input Format:
// The first line contains a single integer,P, denoting the number of operations to perform.
// Each line m of the P subsequent lines contains an operation in one of the two forms defined above.

// Constraints:
// 1 <= P <= 9*10^4
// 1< word <22
// 1< partialWord <22
// Word and PartialWords contains small letters only
// add operation doesn't add any duplicate words.

// Output Format:
// For each find partial operation, print the number of Test words starting with PartialWord on a new line.

// Sample Input:

// 5
// add demure
// find d
// add diligent
// add enmity
// find enm

// Sample Output:

// 1
// 1

// Explanation:

// add demure : This operation will add "demure" as a new word
// find d : This operation will print the count of word starting with d and the count is 1 here.
// add diligent: This operation will add "diligent" as a new word
// add enmity : This operation will add "enmity" as a new word
// find enm: This operation will print the count of word starting with enm and the count is 1 here.



//  **SOLUTION**







#include <iostream>  
#include <map>  
#include <string>  
  
using namespace std;  
  
int main() {  
    int n;  
    cin >> n;  
  
    map<string, int> words;  
  
    while (n--) {  
        string operation, word;  
        cin >> operation >> word;  
  
        if (operation == "add") {  
            words[word] = 1;  
        } else {  
            int count = 0;  
            for (auto i = words.lower_bound(word); i != words.end() && i->first.find(word) == 0; ++i) {  
                count++;  
                 
            }  
            cout << count << endl;  
        }  
    }  
  
    return 0;  
}
