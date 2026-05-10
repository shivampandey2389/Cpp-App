#include<iostream>
#include<vector>
using namespace std;

// int main(){
//     cout << "Hello World!" << endl;
//     return 0;
// }

// int main(){
//     vector<int> v = {1, 2, 3, 4, 5};
//     v.push_back(6);
//     for(int arr:v){
//         cout << arr << " "<<endl;
//     }
//     return 0;   
// }

// Largest Number in an Array

// int main(){
//     vector<int> v = {1,3,2,7,9,10};
//     int largest = v[0];
//     for (int arr:v){
//         if(arr > largest){
//             largest = arr;
//         }
//     }
//     cout << "Largest number is: " << largest << endl;
//     return 0;
// }

// Reverse an Array

// int main(){
//     vector<int> v ={1,2,3,4,56,7};
//     int n = v.size();
//     vector<int> rv;
//     for(int i = n-1;i>=0;i--){
//         cout << v[i] << " "<<endl;
//         rv.push_back(v[i]);
//     } 
//     cout << "Reversed Array: " << endl;
//     for(int arr:rv){
//         cout << arr << " "<<endl;
//     }
//     return 0;
// }

// Palindrom Number

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     int original = n;
//     int reversed = 0;
//      while(n > 0){
//         int digit = n % 10;
//         reversed  =10 * reversed + digit;
//         n = n / 10;

//      }
//         if(original == reversed){
//             cout << "The number is a palindrome." << endl;
//         } else {
//             cout << "The number is not a palindrome." << endl;
//         }
//     return 0;
// }

// Factorial of a Number

// int main(){
//     int n;
//     cout << "Enter a number:";
//     cin >> n;
//     int factorial = 1;
//     for(int i=1;i<=n;i++){
//         factorial *=i;

//     }
//     cout << "Factorial of " << n << " is: " << factorial << endl;
//     return 0;
// }

// Factorial of a Number using Recursion

int Recursive(int n){
    if(n ==0 || n ==1){
        return 1;
    }
    return n * Recursive(n-1);
}

int main(){
    int n;
    cout << "Enter a number ";
    cin >> n;
    int fact = Recursive(n);
    cout << "Factorial of " << n << " is: " << fact << endl;
    return 0;
}