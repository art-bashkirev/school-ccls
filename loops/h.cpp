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
#include <cstring>
#include <cstdlib>
#include <regex>
#include <cmath>
#include <numeric>
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

int smd(int N);
int count_odd(int N);
int isdiv_sum(int N, int sum);
int prod(int N);
int maxdigit(int N);

int main() {
    // ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ...code... lonely here...

    string N;
    const char *Nc = N.c_str();

    cin >> N;

    int sum_of_digits = smd(atoi(Nc));

    cout << smd(atoi(Nc)) << endl;
    cout << N.size() << endl;
    cout << count_odd(atoi(Nc)) << endl;
    cout << isdiv_sum(atoi(Nc), sum_of_digits) << endl;
    cout << prod(atoi(Nc)) << endl;
    cout << maxdigit(atoi(Nc)) << endl;
    reverse(all(N));
    cout << N << endl;

    return 0;

}

int smd(int N)
{
    int sum = 0, p;
    wf(N > 0)
    {
        p = N % 10;
        sum += p;
        N = N / 10;
    }
    return sum ;
}

int count_odd(int N)
{
    int ptr, ctr=0;
    wf(N > 0)
    {
        ptr = N % 10;
        if (ptr % 2 != 0)
        {
            ctr++;
        }
        N /=  10;
    }
    return ctr;
}

int isdiv_sum(int N, int sum)
{
    if (N % sum == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int prod(int N)
{
    int prd = 1, p;
    wf(N > 0)
    {
        p = N % 10;
        if (p != 0)
        {
            prd *= p;
        }
        N = N / 10;
    }
    return prd;
}

int maxdigit(int N)
{
    string s = to_string(N);
    char mc = *(max_element(all(s)));
    int max = mc - '0';
    return max;
}
