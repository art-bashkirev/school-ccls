#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <map>
#include <utility>
#include <tuple>
#include <cstdio>
#include <thread>
#include <string>
#include <regex>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vll vector<ll>
#define mi map<int,int>
#define mll map<ll,ll>
#define si set<int>
#define sll set<ll>
#define pql priority_queue<ll>
#define pqs priority_queue<int,vi,greater<int> >
#define loopf(i, m, n, step) for (ll i = m;i < n; i += step)
#define loopb(i, m, n, step) for (ll i = m;i > n; i -= step)
#define wf(cond) while (cond)
#define to_lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define to_upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
#define mod 1000000007


int main() {
    // ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ...code... lonely here...

    double P, r, t=0, Q;
    cin >> P;
    cin >> Q;
    r = P;

    wf(Q > P)
    {
        t++;
        P *= 1.3;
        r += P;
    }

    cout << t << endl << r << endl;

    return 0;

}
