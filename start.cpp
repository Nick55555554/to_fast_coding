#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int press(int n){
    int count = 2;
    vector<int> numbers;
    for (int i = 0; i < n;++i){
        int a;
        cin >> a;
        numbers.push_back(a);
    }
    sort(numbers.begin(),numbers.end());
    for(int i = 0; i <numbers.size()-1; ++i ){
        count += 1 + numbers[i];
    }
    return count;
}
int main () {
    int  a, h, k, m, s;
    cin >> a;
    cout << press(a);
    return 0;
}
