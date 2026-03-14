//headers.h for newanagrams
#include <string>
using namespace std;

class AString {
private:
    //private member variable
    string StringValue;

public:
    //initializes StringValue to an empty string
    AString();

    //initializes StringValue with a specific string
    AString(string s);

    //returns the value of the member variable
    string getStringValue();

    //removes non-alphabetic characters and converts to lowercase
    void cleanUp();

    //counts the frequency of letters 'a' through 'z'
    void countLetters(int counts[26]);

    //prompts user for input, allowing for spaces
    void getAString();
};

//DO NOT CHANGE THESE AND DO NOT ADD TO THEM!
bool compareCounts(int a[], int b[]);
const int ARRAYSIZE = 26;