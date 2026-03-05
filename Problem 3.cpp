// Compilation command: g++ -std=c++17 -Wall -Wextra -g -fsanitize=address -o problem3 problem3.cpp

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
    int lo = 0, hi = n - 1;
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
    for (int i = 0; i < n; i++)
        arr[i] = i * 2;
    return arr;
}

int main() {
    int sizes[] = {10, 100, 1000};

    for (int s = 0; s < 3; s++) {
        int n = sizes[s];
        int* arr = generateSortedArray(n);

        cout << "n = " << n << "\n";

        // Search for a value that exists (element at midpoint)
        int existingTarget = arr[n / 2];
        int linResult = linearSearch(arr, n, existingTarget);
        int binResult = binarySearch(arr, n, existingTarget);
        cout << "  target = " << existingTarget << " (exists)\n";
        cout << "  linearSearch: " << linResult << "\n";
        cout << "  binarySearch: " << binResult << "\n";
        cout << "  agree: " << (linResult == binResult ? "yes" : "no") << "\n";

        // Search for a value that does not exist
        int missingTarget = -1;
        int linResult2 = linearSearch(arr, n, missingTarget);
        int binResult2 = binarySearch(arr, n, missingTarget);
        cout << "  target = " << missingTarget << " (not exists)\n";
        cout << "  linearSearch: " << linResult2 << "\n";
        cout << "  binarySearch: " << binResult2 << "\n";
        cout << "  agree: " << (linResult2 == binResult2 ? "yes" : "no") << "\n";

        cout << "\n";
        delete[] arr;
    }

    return 0;
}