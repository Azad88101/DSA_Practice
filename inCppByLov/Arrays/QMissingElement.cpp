#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> arr{1, 3, 5, 3, 4};
    int i = 1;
    // while (i < arr.size())
    // {
    //     if (arr[i] == i)
    //     {
    //         i++;
    //     }
    //     else
    //     {
    //         swap(arr[i], arr[arr[i]]);
    //     }
    // }
    
   
    
    
    for (int j = 0; j < arr.size(); j++)
    {
        cout << arr[j];
    }

    return 0;
}
