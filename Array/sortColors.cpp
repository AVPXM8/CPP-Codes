#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Sorts an array of 0s, 1s, and 2s in-place (Dutch National Flag Algorithm).
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */
void sortColors(vector<int>& nums) {
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;

    while (mid <= high) {
        if (nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        } else if (nums[mid] == 1) {
            mid++;
        } else {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements (0, 1, or 2 only):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Original array: ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    sortColors(nums);

    cout << "Sorted array: ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    return 0;
}
