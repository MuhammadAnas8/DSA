#include <iostream>
using namespace std;
int main(){
    int rows = 5;

    // Right Triangle
    cout<<"Right Triangle"<<endl;
    for(int i= 0; i<rows; i++){
        for(int j = 0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }


    // inverted triangle
cout<<"inverted Triangle"<<endl;
    for(int i =0; i<rows; i++){
        for(int j=rows; j>i; j--)
        cout<<"* ";
    cout<<endl;
    }

    //rectangle or square
    cout<<"rectangle or square"<<endl;
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<rows; j++)
        cout<<"* ";
    cout<<endl;
    }


    // Equilateral Trianagle
    cout<<"Equilateral Trianagle"<<endl;
    for (int i = 0; i < rows; i++)
    {
        for(int s = i; s<rows-1; s++){
            cout<<" ";
        }
        for (int j = 0; j <= i ; j++)
        {
        cout<<"* ";
        }
        
        cout<<endl;
        
    }

//        *
//      * * *
//    * * * * *
//  * * * * * * *
    cout<<"Pyramid Pattern"<<endl;
    for (int i = 1; i <= rows; i++) {
        for(int s = i; s<rows; s++) {
            cout<<"  ";
        }
        for (int j = 1; j <= 2*i-1 ; j++) {
        cout<<"* ";
        }
        
        cout<<endl;
        
    }


    // 2,1,0,1,2

    cout<<"diamond Pattern"<<endl;
    for (int i = 1; i <= 2 * rows - 1; i++) {
        int spaces = abs(rows - i); // Calculate spaces based on the current row
        int stars = 2 * (rows - spaces) - 1; // Calculate stars based on spaces

        // Print spaces
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < stars; j++) {
            cout << "*";
        }
        cout << endl;
    }

//     *
//   * * *
// * * * * * 
//   * * *
//     *
    
    return 0;
}