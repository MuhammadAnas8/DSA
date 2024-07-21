#include <iostream>
using namespace std;
int sum(int n){
    if (n==0){
        return 0;
    }
    else{
        return n + sum(n-1);
    }
}
int main(){
    int n;
    cout<<"Enter number of terms to sum"<<endl;
    cin>>n;

    int total = sum(n);
    cout<<total;
    return 0;
}