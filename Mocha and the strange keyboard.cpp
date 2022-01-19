//اذا مررت من هنا فادعوا الله ان ييسر لي امري
#include <iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<algorithm>
#define ahmed  ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
#define ld long double
int counter[1000001] = {};
int main()
{
    ahmed;
    string s; ll t; cin >> t;
    while (t--) {
        cin >> s; ll c = 1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'b')
                c *= 2;
        }
        cout << c << endl;
    }
    return 0;
}
