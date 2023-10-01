#include <iostream>
using namespace std;

int main() {
    int n, p;
    cin >> n >> p;

    int a = p / 2;
    int b = (n / 2) - a;

    int res = min(a, b);

    cout << res << endl;

    return 0;
}
