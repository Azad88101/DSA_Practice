#include <iostream>
using namespace std;
void printSubSequence(string &s, int i, string output)
{
    if (i >= s.length())
    {
        cout << output <<endl;
        return;
    }
    // exclude
    printSubSequence(s, i + 1, output);
    // include 
    output.push_back(s[i]);
    printSubSequence(s, i + 1, output);
}

int main(int argc, char const *argv[])
{
    string s = "abc";
    int i = 0;
    string output = "";
    printSubSequence(s, i, output);
    // Change the type of 'output' parameter in printSubSequence function to string&
    return 0;
}
