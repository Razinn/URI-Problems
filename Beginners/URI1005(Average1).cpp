#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a,b,r;
    cin >> a >> b;
    r = ((a*3.5) + (b*7.5))/11;
    cout << "MEDIA = " << fixed << setprecision(5) << r << "\n";

    return 0;
}


