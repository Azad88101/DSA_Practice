#include <iostream>
using namespace std;
int main()
{
    // ye wala kudhse kiya h sach  me

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < n - i; k++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}
