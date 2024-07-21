#include <iostream>
using namespace std;
int main()
{
    // 1,3,5,7,11
    int n,flag=0;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    if(n==1){
     cout<<"1 is a prime number"<<endl;
     return 0;
    } 
    for(int i =2; i<n; i++){
        if(n%2==0){
            flag=1;
            break;
        }
    }

    if(flag==0){ 
    cout<<n<<" is a prime number"<<endl;
    }
    else{ 
        cout<<n<<" is not a prime number"<<endl;
    }
 
    return 0;
}