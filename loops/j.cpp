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
    vi v;
    int n, sumabs=0, posnum=0, div7=0, max=-mod, maxcons=0, cnt=1;
    cin >> n;
    wf (n != 0)
    {
        v.push_back(n);
        cin >> n;
    }

    loopf(n, 0, v.size(), 1)
    {
        sumabs += abs(v[n]);
        if (v[n] > 0)
        {
            posnum++;
            cnt++;
        }
        else
        {
           if (cnt > maxcons)
           {
               maxcons = cnt;
           }
           cnt = 1;
       }
       
        if (v[n] % 7 == 0)
        {
            div7++;
        }
        if (v[n] > max)
        {
            max = v[n];
        }

    }

    cout << posnum << endl << sumabs << endl << div7 << endl << max << endl;


    return 0;

}
