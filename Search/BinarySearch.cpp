#include<iostream>
using namespace std;

// int main(){
    // int arr[] = {1,2,3,4,5,6};
    // int target = 4;
    // int low = 0;
    // int high = sizeof(arr) / sizeof(arr[0]);
// 
    // while(low <= high){
        // int mid = (low + high)/2;
// 
        // if(arr[mid] == target){
            // cout << "Target is at " << mid <<endl;
            // return 0; 
        // }
        // else if(arr[mid] < target){
            // low = mid + 1;
        // }
        // else{
            // high = mid - 1;
        // }
    // }
// 
    // cout << "Element not found." << endl;
    // return 0;
// }


// int main(){
    // int arr[]= {1,2,3,4,5,5,6};
    // int target =5;
    // int low =0;
    // int high = sizeof(arr) / sizeof(arr[0]) - 1;
    // while
// }


int lowerBound(int arr[], int low, int high, int target){
    int ans = high;
    while(low<=high){
        int mid = low + (high - low) /2;
        if(arr[mid] >= target){
            ans = mid;
            high = mid - 1;

        }else{
            low = mid + 1;
        }
    }

    return ans;

}

int main(){
    int arr[]= {1,2,3,4,5,5,6};
    int target =5;
    int low =0;
    int high = sizeof(arr) / sizeof(arr[0]) - 1;
    cout << lowerBound(arr, low, high, target);
    return 0;
}