// binary search
#include <iostream>
#include <vector>
using namespace std;
vector<int> binarySearchIn2d(vector<vector<int>> arr, int target)
{
    int row = arr.size();
    int col = arr[0].size();
    int s = 0;
    int e = row * col - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        mid = s + (e - s) / 2;
        int rowIndex = mid / col;
        int colIindex = mid % col;
        int element = arr[rowIndex][colIindex];
        // if (arr[mid / col][mid % col] == target)

        // if (arr[rowIndex][colIindex] == target)
        if (element == target)
        {
            vector<int> values{element, rowIndex, colIindex, mid};
            // return mid;
            return values;
        }
        // else if (arr[rowIndex][colIindex] < target)
        else if (element < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    // return -1;
}

int main(int argc, char const *argv[])
{
    vector<vector<int>> arr{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20}};

    int target;
    cin >> target;
    vector<int> value = binarySearchIn2d(arr, target);

    // int index} =
    // if (index == -1)
    // {
    //     cout << "not found";
    // }
    // else
    // {
    //     cout << index;
    // }

    cout << "element you searched " << value[0] << endl;
    cout << "row index " << value[1] << endl;
    cout << "column index " << value[2] << endl;
    cout << "linear Index " << value[3] << endl;

    return 0;
}
