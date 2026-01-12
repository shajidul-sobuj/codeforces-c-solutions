#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <double> v(n);
    double sum = 0;
    for (int i=0;i<n;i++) {
        cin >> v[i];
        sum+=v[i];
    }
    double avg = (sum/n);
    cout << fixed << setprecision(7) << avg << endl;
    return 0;
}
