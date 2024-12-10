#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long a, h, k, m, s;
    cin >> a >> h >> k >> m >> s;

    long long strips_needed = (a + m - 1) / m; 

    long long strips_for_roll = s / h;
    long long patterns_in_roll = s / k;

    long long strips_with_pattern = min(strips_for_roll, patterns_in_roll);

    long long rolls_needed = (strips_needed + strips_with_pattern - 1) / strips_with_pattern; 

    cout << rolls_needed << endl;

    return 0;
}
