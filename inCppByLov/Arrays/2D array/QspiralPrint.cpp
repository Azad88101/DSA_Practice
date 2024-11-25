#include <iostream>
#include <vector>
using namespace std;
void spiralPrint(vector<vector<int>> arr)
{
    int row = arr.size();
    int i = 0;
    // int col=arr[i].size();
    int col = arr[0].size();
    int TotalElem = row * col;

    int startRow = 0;
    int lastCol = col - 1;
    int lastRow = row - 1;
    int startcol = 0;

    int count = 0; // for stoping the loop
    while (cout < TotalElem)
    {
        /* code */
    }
}
int main(int argc, char const *argv[])
{
    vector<vector<int>> arr{{1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}};
    spiralPrint(arr);

    return 0;
}
