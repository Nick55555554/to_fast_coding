#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int triangles(int p, int q){
    vector<vector<int>> variants;
    for(int i = p; i <= q; ++i ){
        for(int j = i; j <= q; ++j ){
            for(int k = j; k <= q; ++k ){
                if(i+j > k) variants.push_back({i,j,k});
            } 
        }
    }
    return (variants.size());;
}

int main () {
    int  p,q;
    cin >> p >> q;
    cout << triangles(p,q);
    return 0;
}
