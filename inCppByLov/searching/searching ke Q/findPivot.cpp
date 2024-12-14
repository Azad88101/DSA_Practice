#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector<int> ans)
{
    int s = 0;
    int e = ans.size() - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (ans[mid] > ans[mid + 1])
        {
            return mid;
        }
        if (ans[mid - 1] > ans[mid])
        {
            return mid - 1;
        }
        else if (ans[s] == ans[mid] && ans[mid] == ans[e])
        {
            s++;
            e--;
        }
        else if (ans[s]>ans[mid])
        {
            e=mid-1;
        }
        else{
            s++;
        }
    }
}
int main(int argc, char const *argv[])
{
    vector<int> arr{9, 10, 2, 4, 6, 8};
    findPivot(arr);
    return 0;
}
