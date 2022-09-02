#include <iostream>
//#include <cstdio>
using namespace std;
int main()
{
    string s;
    char mod[12] = "0123456789X";
    int j = 1, sum = 0;
    cin >> s;
    for (int i = 0; i <s.size()-1; i++)
    {
        if (s[i] == '-')
            continue;
        sum += (s[i] - '0') * j;
        j++;
    }
    if (mod[sum % 11] == s[s.size() - 1])
        cout << "Right";
    else
    {
        s[s.size() - 1] = mod[sum % 11];
    cout << s;
        }
    return 0;
}