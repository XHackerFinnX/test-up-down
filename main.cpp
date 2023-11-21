#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (n > m) {
        cout << n << " > " << m << endl;
        cout << "БОЛЬШЕ" << endl;
    } else if (m > n) {
        cout << n << " < " << m << endl;
        cout << "МЕНЬШЕ" << endl;
    } else {
        cout << n << " = " << m << endl;
        cout << "РАВНО" << endl;
    }
}
