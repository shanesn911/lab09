// file: functions.cpp for newanagrams

// Define all member functions for class AString
//    as well as all other functions that need definition
#include <iostream>
#include <string>
#include <cctype>
#include "headers.h"

using namespace std;

// Sets default value to an empty string 
AString::AString() : StringValue("") {}

// Sets value to the provided argument 
AString::AString(string s) : StringValue(s) {}

// Simple accessor for the private member variable 
string AString::getStringValue() {
    return StringValue;
}

// Iterates through the string to remove non-letters and normalize case 
void AString::cleanup() {
    string filtered = "";
    for (char c : StringValue) {
        if (isalpha(c)) {
            filtered += tolower(c);
        }
    }
    StringValue = filtered;
}

// Maps letters to array indices (0-25) and increments counts 
void AString::countLetters(int counts[26]) {
    for (char c : StringValue) {
        int index = c - 'a';
        if (index >= 0 && index < 26) {
            counts[index]++;
        }
    }
}

// Uses getline to capture a full line of text including whitespaces 
void AString::getAString() {
    string input;
    cout << "Enter string value: ";
    getline(cin, input);
    StringValue = input;
}

// Returns true if all 26 letter counts match exactly 
bool compareCounts(int a[], int b[]) {
    for (int i = 0; i < 26; i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}
