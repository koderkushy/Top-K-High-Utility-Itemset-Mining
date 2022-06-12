#include "bits/stdc++.h"
using namespace std;

typedef long long           lol;
typedef pair<int,int>       pii;
#define pb                  push_back
#define ub                  upper_bound
#define lb                  lower_bound
#define fo(i,l,r,d)         for(auto i=l; d<0?i>r:(d>0?i<r:0); i+=d)
#define all(x)              x.begin(), x.end()
#define ff                  first
#define ss                  second    

mt19937 rng (chrono::high_resolution_clock::now().time_since_epoch().count());
template <typename A, typename B> ostream& operator<< (ostream &cout, pair<A, B> const &p) { return cout << "(" << p.first << ", " << p.second << ")"; }
template <typename A, typename B> istream& operator>> (istream& cin, pair<A, B> &p) {cin >> p.first; return cin >> p.second;}
template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << "["; for(int i = 0; i < v.size(); i++) {if (i) cout << ", "; cout << v[i];} return cout << "]";}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}
template <typename A, typename B> A amax (A &a, B b){ if (b > a) a = b ; return a; }
template <typename A, typename B> A amin (A &a, B b){ if (b < a) a = b ; return a; }

#include "Parse_spmf.h"
#include "PriorityQueue_EFIM.h"

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);





}