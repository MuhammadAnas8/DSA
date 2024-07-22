#include <iostream>
using namespace std;

// Total comparisons: 9 inner: 45 inside if: 12
template <typename t> void bubblesort(t arr[], int n){
int inner = 0, outer = 0, inside =0;
    for(int i = 0; i<n-2; ++i){
        outer++;
        for(int j = 0;j<n-2-i; j++){
            inner++;
            if(arr[j]> arr[j+1]){
                inside++;
            t temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1] = temp;
            }

        }
    }

    cout<<"Total comparisons: "<<outer<<" inner: "<<inner<<" inside if: "<<inside<<endl;
    return;

}
int main(){
    int arr[] = {3,2,5,9,4,46,0,56,9,89};
    
    float arr1[] = {3.6,2.7,5.4,9.9,4.4,46.3,0.5,56.7,9.1,89.7};

    // int arr[] = {2,3,5,9,4,7,8,12,14,16};
    // float arr1[] = {2.4,3.3,5.4,9.7,4.9,7.1,8.4,12.2,14.4,16.5};

    //   int arr[] = {2,3,4,5,6,7,8,9,10,11};
    // float arr1[] = {2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.10,11.11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    bubblesort<int>(arr,n); // Total comparisons=>      outer: 7 inner: 42 inside if: 11
    bubblesort<float>(arr1,n1); // Total comparisons=>  outer: 7 inner: 42 inside if: 12

    for(int i = 0; i<n; i++)
        cout<<arr[i]<<" \t"<<arr1[i]<<endl;

    }