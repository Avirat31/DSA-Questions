#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>& nums, int target) {
    int size = nums.size();
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end) {
        if (target == nums[mid]) {
            return mid;
        }

        if (target > nums[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    // Target is not present in the array
    return -1;
}

int main(){

    vector<int> nums = {1, 3, 5, 7, 9, 11, 13, 15};
    int target = 7;

    int result = search(nums, target);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}