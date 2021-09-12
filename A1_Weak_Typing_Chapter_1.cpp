#include <bits/stdc++.h>
using namespace std;
  
typedef long long ll;

void solve()
{
    ll n;
    cin>>n;

    string w;
    cin>>w;
    char a=0;
    ll count=0;
    for(ll i=0;i<n;i++)
    {
        if(w[i]!='F' && a==0)
        {
            a=w[i];
        }
        else if(a!=w[i] && w[i]!='F')
        {
            count++;
            a=w[i];
        }
    }
    cout<<count<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    for(int it=1;it<=t;it++) 
    {
        cout << "Case #" << it << ": ";
        solve();
    }
    return 0;
}