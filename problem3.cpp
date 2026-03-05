// Compile with:
// g++ -std=c++17 -Wall -Wextra -g problem3.cpp -o problem3

#include <iostream>
using namespace std;

// O(n)
int linearSearch(int* arr, int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}

// O(log n)
int binarySearch(int* arr, int n, int target) {
    int lo = 0;
    int hi = n - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) lo = mid + 1;
        else hi = mid - 1;
    }
    return -1;
}

// O(n)
int* generateSortedArray(int n) {
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        arr[i] = 2 * i; // 0,2,4,... distinct & sorted
    }
    return arr; // caller must delete[]
}

int main() {
    int sizes[] = {10, 100, 1000};

    for (int s = 0; s < 3; s++) {
        int n = sizes[s];
        int* arr = generateSortedArray(n);

        cout << "n = " << n << "\n";

        // value exists: midpoint element
        int targetExist = arr[n / 2];
        int lin1 = linearSearch(arr, n, targetExist);
        int bin1 = binarySearch(arr, n, targetExist);
        cout << "  target (exists) = " << targetExist << "\n";
        cout << "    linearSearch index: " << lin1 << "\n";
        cout << "    binarySearch index: " << bin1 << "\n";

        // value does not exist: pick odd number that isn't in {0,2,4,...}
        int targetNo = -1; // not in array
        int lin2 = linearSearch(arr, n, targetNo);
        int bin2 = binarySearch(arr, n, targetNo);
        cout << "  target (not exist) = " << targetNo << "\n";
        cout << "    linearSearch index: " << lin2 << "\n";
        cout << "    binarySearch index: " << bin2 << "\n";

        // confirm they agree
        cout << "  agree (exists)? " << (lin1 == bin1 ? "YES" : "NO") << "\n";
        cout << "  agree (not exist)? " << (lin2 == bin2 ? "YES" : "NO") << "\n";
        cout << "\n";

        delete[] arr;
    }

    return 0;
}