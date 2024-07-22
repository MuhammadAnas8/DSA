#include <iostream>
using namespace std;
template <typename t> void selectionSort(t arr[], int n){
        int min =0;
    for(int i = 0; i<n; i++){
        min = i;
        for(int j = i+1; j<n; j++){
            if (arr[j]> arr[min])
            {
              min = j;
            }
            if(min != i){
            t temp = arr[i];
            arr[i] = arr[min];
            arr[min]= temp;
            }
        }
    }
}

int main(){

    int arr[] = {2,3,5,9,4,7,8,12,14,16};
    float arr1[] = {2.4,3.3,5.4,9.7,4.9,7.1,8.4,12.2,14.4,16.5};

    // int arr[] = {2,3,4};
    // float arr1[] = {4.0,3.1,2.2};



    int n = sizeof(arr)/sizeof(arr[0]);
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    selectionSort<int>(arr,n);         
    selectionSort<float>(arr1,n1);    

    for(int i = 0; i<n; i++)
        cout<<arr[i]<<" \t"<<arr1[i]<<endl;
    return 1;
}