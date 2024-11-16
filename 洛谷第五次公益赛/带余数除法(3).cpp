#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--) {
        int b, r;
        cin >> b >> r;
        int f = b - r;
        int sum = 0, t = 0;
        int q;
        for (q = 1; q * q < f; q++) {
            if (f % q == 0 &&q>r)
                sum+=2;
            else if (f % q == 0&&f/q>r)
                sum++;
        }
        if (q * q == f && q > r)
            sum++;
        cout << sum << endl;
    }
    return 0;
}
