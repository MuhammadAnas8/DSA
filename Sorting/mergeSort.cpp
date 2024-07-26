#include <iostream>
#include <vector>

using namespace std;

template <typename t>
vector<t> merge(const vector<t>& left, const vector<t>& right){
    vector<t> result;
    size_t i = 0, j = 0;
    while(i<left.size() && j<right.size()){
        if(left[i]<=right[j]){
            result.push_back(left[i++]);
        }
        else{
            result.push_back(right[j++]);
        }
    }
    while (i<left.size())
    {
        result.push_back(left[i++]);
    }
    while(j<right.size()) result.push_back(right[j++]);

    return result;
    
}

// Merge Sort function to recursively sort and merge vectors
template<typename T>
vector<T> mergeSort(const vector<T>& arr, int start, int end) {
    if (start >= end) {
        return vector<T>(arr.begin() + start, arr.begin() + end + 1);
    }
    int mid = (start + end) / 2;
    vector<T> left = mergeSort(arr, start, mid);
    vector<T> right = mergeSort(arr, mid + 1, end);
    return merge1(left, right);
}

// Main function to test Merge Sort
int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10}; // Example array

    // Perform merge sort on the array
    vector<int> sortedArr = mergeSort(arr, 0, arr.size() - 1);

    // Print the sorted array
    cout << "Sorted array: ";
    for (int num : sortedArr) {
        cout << num << ' ';
    }
    cout << endl;

    return 0;
}
