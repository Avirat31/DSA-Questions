#include <iostream>
#include <vector>
using namespace std;

int lowerBound(vector<int> arr, int n, int x)
{
    // Write your code here
    int s = 0;
    int e = arr.size() - 1;
    int ans = x;
    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] >= x)
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
int main()
{

    vector<int> arr = {1, 3, 3, 3, 5, 7, 9, 11};
    int n = arr.size();
    int x = 3;

    int lowerBoundIndex = lowerBound(arr, n, x);

    cout << "Lower bound of " << x << " is at index " << lowerBoundIndex << endl;

    return 0;
}
