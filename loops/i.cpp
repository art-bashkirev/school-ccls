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
#include <set>
#include <cmath>
#include <unordered_map>
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


mi cue(const vi& vec) {
   mi cm;
   for (const auto& item : vec) {
       ++cm[item];
   }
   return cm;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ...code... lonely here...
    int N, d=2;
    cin >> N;
    vi fs, temp;
    vi::iterator iptr;
    wf (N > 1)
    {
        if (N % d == 0)
        {
            N /= d;
            fs.pb(d);
        }
        else
        {
            d++;
        }
    }
    loopf(d, 0, fs.size()-1, 1)
    {
        cout << fs[d] << "*";
    }
    cout << fs[fs.size()-1] << endl;
    mi ctrs = cue(fs);
    for (const auto& pair : ctrs) {
        cout << pair.first << "**" << pair.second << " ";
    }
    cout << endl;
    return 0;

}
