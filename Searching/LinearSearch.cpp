#include <iostream>
using namespace std;

template <typename T> 
T LinearSearch(T arr[], T target,int size){
    for(int i = 0; i<size; i++){
        if(arr[i]==target)
        return i;
    }
    return -1;
}

int main(){
    int array[]= {3,67,12,78,300};
    int toSearch = 780;
       int size = sizeof(array)/sizeof(array[0]);
    int index = LinearSearch(array,toSearch,size);

    if(index!= -1){
    cout<<toSearch<<" found at index: "<<index<<endl;
    return 0;
    }

    cout<<toSearch<<" not found in the array"<<endl;
    
}