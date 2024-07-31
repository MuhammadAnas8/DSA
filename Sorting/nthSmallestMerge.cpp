#include <iostream>
#include <vector>
using namespace std;

template <typename T>
vector<T> merge(const vector<T>& left, const vector<T>& right){
vector<T> result;
size_t i=0, j=0;

while(i<left.size() && j<right.size()){
    if(left[i]<=right[j]){
        result.push_back(left[i++]);
    }
    else{
        result.push_back(right[j++]);
    }
}

while(i<left.size()){
    result.push_back(left[i++]);
}
while(j<right.size()){
    result.push_back(right[j++]);
}
return result;
 }
template <typename T>
int merge(const vector<T>& left, const vector<T>& right, int nth){
vector<T> result;
size_t i=0, j=0;

while(i<left.size() && j<right.size()){
    if(left[i]<=right[j]){
        result.push_back(left[i++]);
    }
    else{
        result.push_back(right[j++]);
    }
}

while(i<left.size()){
    result.push_back(left[i++]);
}
while(j<right.size()){
    result.push_back(right[j++]);
}
return result[nth-1];
 }

template <typename T>
vector<T> mergeSort(const vector<T>& arr, int start, int end){
    if (start >= end) {
        return vector<T>(arr.begin() + start, arr.begin() + end + 1);
    }
    int mid = (start + end) / 2;
    vector<T> left = mergeSort(arr, start, mid);
    vector<T> right = mergeSort(arr, mid + 1, end);
    return merge(left, right);
}
void display(const vector<int>& arr){
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << ' ';
    }
    cout << endl;
}

int main(){
vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    vector<int> sortedArr = mergeSort(arr, 0, arr.size() - 1);
    //Find nth smallest element from un sorted array
    int n = 3;
    cout << "The " << n << "th smallest element is: " << sortedArr[n - 1] << endl;

    //find nth smallest from 2 sorted array
    
    vector<int> arr1 = {3,9,10,27};
    vector<int> arr2 = {38,43,82};
    int nth = 4;
    int nthsmallest = merge(arr1, arr2, nth);
    cout<<nth<<"th smallest in two arrays is : "<<nthsmallest<<endl;
    display(sortedArr);
    return 0;

}