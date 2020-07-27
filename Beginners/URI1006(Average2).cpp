#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a,b,c,r;
    cin >> a >> b >> c;
    r = ((a*2) + (b*3) + (c*5))/10;
    cout << "MEDIA = " << fixed << setprecision(1) << r << "\n";

    return 0;
}


