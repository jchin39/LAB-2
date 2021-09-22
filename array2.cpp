#include <iostream>
#include <string>
using namespace std;
int main() {
    //Grabbing the word to reverse
    string word;
    cout << "Enter the string to reverse: ";
    cin >> word;
    //Printing out the letters in reverse by integrating the string in reverse, then printing it.
    for (int i = word.size() -1; i >= 0; i--) {
        cout << word[i];
    }
}