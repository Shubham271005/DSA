class Solution {
public:

    int merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int cnt = 0;
    int left = low;
    int right = mid + 1;

    for (int left = low; left <= mid; left++) {
    while (right <= high &&
           (long long)arr[left] > 2LL * arr[right]) {
        right++;
    }

    cnt += right - (mid + 1);
    }

    right = mid + 1;

    // Merge two sorted halves
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Copy remaining elements from left half
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // Copy remaining elements from right half
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy sorted elements back into original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
    return cnt;
}

int mergeSort(vector<int>& arr, int low, int high) {
    int cnt = 0;
    if (low >= high) return cnt;

    int mid = low + (high - low) / 2;

    cnt += mergeSort(arr, low, mid);
    cnt += mergeSort(arr, mid + 1, high);
    cnt += merge(arr, low, mid, high);
    return cnt;
}

    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        return mergeSort(nums, 0, n-1);
    }
};