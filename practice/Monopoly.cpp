#include <bits/stdc++.h>
#define  v vector<int> 
#define vp(v) vector<pair<int,int>> v
#define s string 
#define g(s) getline(cin,s)
#define loop(in,n) for(int in=0; in<n; in++)
#define all(v) (v.begin(),v.end())
#define sum(v) accumulate(v.begin(),v.end(),0)
#define min(v) *min_element(v.begin(),v.end(),0)
#define max(v) *max_element(v.begin(),v.end(),0)
using namespace std;
    void solve()
        {
          v a;
            int x;
            loop(i,4)
            {
                cin>>x;
                a.push_back(x);
            } 
            int summ = accumulate(a.begin(),a.end(),0);
            int maxx = max(a);
            cout<<maxx<<summ<<"\n";
        }
int32_t main()
    {
        int t;
        cin>>t;
        while(t--)
    {
        solve();
    }
        return 0;
    }