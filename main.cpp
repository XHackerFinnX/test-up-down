#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (n > m) {
        cout << n << " > " << m << endl;
    } else if (m > n) {
        cout << n << " < " << m << endl;
    } else {
        cout << n << " = " << m << endl;
    }
}
