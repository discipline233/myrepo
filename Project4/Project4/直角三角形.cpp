#include <iostream>
#include <cstdio>
using namespace std;
typedef long long ll;
int main()
{
    ll a, b, c = 1;
    cin >> a;
    b = a;
    for (ll i = 1; i <= a; i++) {
        for (ll j = 1; j <= b; j++)
        {
            if (c < 10) {
                cout << "0";
            }
            cout << c;
            c++;
        }
        cout << endl;
        b--;
    }
    return 0;
}