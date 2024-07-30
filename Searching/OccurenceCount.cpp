#include <iostream>
#include <vector>
using namespace std;

template <typename T>
int OccurenceCount(vector<T>& arr, T target){
    size_t  count = 0,i=0;
    while(i<arr.size()){
        if(arr[i]==target){
            count++;
        }
        i++;
    }
    return count;
}
int main(){
    vector<int> arr = {66,4,3,11,34,15,22,11,56,34,11};
    int target = 11;
    int count = OccurenceCount(arr,target);
    cout<<target<<" Appeared "<<count<<" times in vector"<<endl;
    return 1;
}