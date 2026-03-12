// file: headers.h for newanagrams
#include <string>
using namespace std;

class AString {
private:
    string StringValue;

public:
    // Initializes StringValue to an empty string 
    AString();
    
    // Initializes StringValue with a specific string 
    AString(string s);

    // Returns the value of the member variable 
    string getStringValue();

    // Removes non-alphabetic characters and converts to lowercase 
    void cleanup();

    // Counts the frequency of letters 'a' through 'z' 
    void countLetters(int counts[26]);

    // Prompts user for input, allowing for spaces 
    void getAString();
};

// DO NOTE CHANGE THESE AND DO NOT ADD TO THEM!
bool compareCounts(int a[], int b[]);
const int ARRAYSIZE = 26;
