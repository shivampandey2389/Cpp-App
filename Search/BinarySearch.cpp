#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6};
    int target = 4;
    int low = 0;
    int high = sizeof(arr) / sizeof(arr[0]);

    while(low <= high){
        int mid = (low + high)/2;

        if(arr[mid] == target){
            cout << "Target is at " << mid <<endl;
            return 0; 
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    cout << "Element not found." << endl;
    return 0;
}