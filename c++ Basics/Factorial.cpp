#include <iostream>

using namespace std;

// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        cout << factorial(N) << endl;
    }

    return 0;
}
