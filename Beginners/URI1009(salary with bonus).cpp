#include<bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    getline(cin, name);
    double s, t, r;
    cin >> s >> t;
    r = ((t*0.15) + s);
    cout << "TOTAL = R$ " << fixed << setprecision(2) << r << "\n";
    return 0;
}
