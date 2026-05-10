#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    vector<int> v = {1,2,3,4,5};
    int target =3;
    for(int i=0;i<v.size();i++){
        if(v[i] == target){
            cout << "Element found at index: " << i << endl;
            return 0;
        }
    }
    cout << "Element not found." << endl;
    return 0;
}