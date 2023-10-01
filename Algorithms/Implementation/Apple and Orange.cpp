#include <iostream>
using namespace std;

int main() {
    int s, t, a, b, m, n, c1 = 0, c2 = 0;
    cin >> s >> t; // Range of Sam's house
    cin >> a >> b; // Position of apple and orange tree
    cin >> m >> n; // Number of apples and oranges thrown
    
    for (int i = 0; i < m; i++) {
        int apple;
        cin >> apple;
        int a1 = a + apple;
        if (a1 >= s && a1 <= t)
            c1++;
    }

    for (int i = 0; i < n; i++) {
        int orange;
        cin >> orange;
        int o1 = b + orange;
        if (o1 >= s && o1 <= t)
            c2++;
    }

    cout << c1 << "\n" << c2;
    return 0;
}
