#include <iostream>
#include <string>
#include <climits>
using namespace std;
// metjod 1 i mak thiss  using two pointer approach
string reorgnise1(string s)
{

    if (s.length() == 1)
    {
        return s;
    }

    int l = 0;
    int i = 1;
    int h = s.length() - 1;
    while (i <= h)
    {
        if (s[l] == s[i] && s[i] != s[h])
        {
            swap(s[i], s[h]);
            i++;
            h--;
            l++;
        }
        // if (s[l] != s[i])
        else
        {

            l++;
            i++;
        }
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i + 1])
        {
            return "";
        }
    }

    return s;
}
// method 2 by bubbor
string reorgnise2(string s)
{

    int hash[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        hash[s[i] - 'a']++;
    }

    char most_frequent;

    int frequency = INT_MIN;
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
    }
}

int main(int argc, char const *argv[])
{
    string s = "baaba";

    string ans = reorgnise2(s);
    cout << ans;
    return 0;
}
