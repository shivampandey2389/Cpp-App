#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<int> result;

    result.push_back(1);

    for(int x = 2; x <= n; x++) {

        int carry = 0;

        for(int i = 0; i < result.size(); i++) {

            int prod = result[i] * x + carry;

            result[i] = prod % 10;

            carry = prod / 10;
        }

        while(carry) {

            result.push_back(carry % 10);

            carry /= 10;
        }
    }

    cout << "Factorial of " << n << " is: ";

    for(int i = result.size() - 1; i >= 0; i--) {
        cout << result[i];
    }

    cout << endl;
}