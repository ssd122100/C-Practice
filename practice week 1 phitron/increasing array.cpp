#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int  n,x, ans = 0;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            ans += (a[i - 1] - a[i]);
            a[i] = a[i - 1];
        }
    }
    cout << ans;
    return 0;
}
