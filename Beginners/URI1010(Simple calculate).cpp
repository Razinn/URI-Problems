#include<bits/stdc++.h>
using namespace std;

int main()
{
    double c1,c2,u1,u2,p1,p2,r;
    cin >> c1 >> u1 >> p1;
    cin >> c2 >> u2 >> p2;
    r = ((u1*p1)+(u2*p2));
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << r << "\n";
    return 0;
}
