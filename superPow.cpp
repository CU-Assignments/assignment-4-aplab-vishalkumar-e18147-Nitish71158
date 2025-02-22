#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    const int MOD = 1337;
    int modPow(int x, int y, int mod) {
        int res = 1;
        x %= mod;
        while (y > 0) {
            if (y % 2 == 1)
                res = (res * x) % mod;
            x = (x * x) % mod;
            y /= 2;
        }
        return res;
    }

    int superPow(int a, vector<int>& b) {
        a %= MOD;
        int result = 1;
        for (int digit : b) {
            result = modPow(result, 10, MOD) * modPow(a, digit, MOD) % MOD;
        }
        return result;
    }
};
