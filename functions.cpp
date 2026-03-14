//functions.cpp for newanagrams
//defines all member functions for class AString
//as well as all other functions that need definition
#include <iostream>
#include <string>
#include <cctype>
#include "headers.h"

using namespace std;

//sets default value to an empty string
AString::AString() : StringValue("") {}

//sets value to the provided argument
AString::AString(string s) : StringValue(s) {}

//simple accessor for the private member variable
string AString::getStringValue() {
    return StringValue;
}

//iterates through the string to remove non-letters and normalize case
void AString::cleanUp() {
    string filtered = "";
    for(char c : StringValue) {
        if(isalpha(c)) {
            filtered += tolower(c);
        }
    }
    StringValue = filtered;
}

//maps letters to array indices (0-25) and increments counts
void AString::countLetters(int counts[26]) {
    for(char c : StringValue) {
        int index = c - 'a';
        if(index >= 0 && index < 26) {
            counts[index]++;
        }
    }
}

//uses getline to capture a full line of text including whitespaces
void AString::getAString() {
    string input;
    cout << "Enter string value: ";
    getline(cin, input);
    StringValue = input;
}

//returns true if all 26 letter counts match exactly
bool compareCounts(int a[], int b[]) {
    for(int i = 0; i < 26; i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}