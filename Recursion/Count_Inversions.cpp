#include <bits/stdc++.h>
using namespace std;

int merge(vector<int>& v, int low, int mid, int high) {
    int left = low;
    int right = mid + 1;
    int count = 0;
    vector<int> temp;

    while (left <= mid && right <= high) {
        if (v[left] <= v[right]) {
            temp.push_back(v[left]);
            left++;
        } else {
            temp.push_back(v[right]);
            count += (mid - left + 1); // Count inversions
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(v[left]);
        left++;
    }

    while (right <= high) {
        temp.push_back(v[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        v[i] = temp[i - low]; // Copy sorted elements back to original array
    }

    return count;
}

int findInversions(vector<int>& v, int i, int j) {
    if (i >= j) {
        return 0;
    }

    int mid = i + (j - i) / 2;
    int leftInversions = findInversions(v, i, mid);
    int rightInversions = findInversions(v, mid + 1, j);
    int mergeInversions = merge(v, i, mid, j);

    return leftInversions + rightInversions + mergeInversions;
}

int main() {
    vector<int> v = {70, 50, 60, 10, 20, 30, 80, 15};
    int inversion = findInversions(v, 0, v.size() - 1);

    cout << "Number of inversions: " << inversion << endl;
    return 0;
}
