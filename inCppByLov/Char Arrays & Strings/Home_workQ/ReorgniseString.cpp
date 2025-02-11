#include <iostream>
#include <string>
using namespace std;

string reorgnise(string s)
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
       if (s[i]==s[i+1])
       {
       return "";
       }
       
    }
    
    return s;
}
int main(int argc, char const *argv[])
{
    string s = "baaba";

    string ans = reorgnise(s);
    cout << ans;
    return 0;
}
