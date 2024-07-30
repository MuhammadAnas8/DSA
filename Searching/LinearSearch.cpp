#include <iostream>
#include <vector>
using namespace std;

template <typename T> 
int LinearSearch(const vector<T>& arr, T target){ //size_t is for unsigned int
    for(size_t i = 0; i<arr.size() ; i++){
        if(arr[i]==target)
        return i;
    }
    return -1;
}

int main(){
    vector<int> array = {3,67,12,78,300};
    int toSearch = 78;
    int index = LinearSearch(array,toSearch);
    if(index!= -1){
    cout<<toSearch<<" found at index: "<<index<<endl;
    return 0;
    }

    cout<<toSearch<<" not found in the array"<<endl;
    
}