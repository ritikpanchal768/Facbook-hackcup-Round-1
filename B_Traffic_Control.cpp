#include <bits/stdc++.h>
using namespace std;
  
typedef long long ll;

void solve()
{
    ll n,m,ad,bc;
    cin>>n>>m>>ad>>bc;
    
    ll z=ad-(n+m-2);
    ll y=bc-(n+m-2);

    if(z>0 && y>0)
    {
        cout<<"Possible"<<endl;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                if(i==0 && j==0)
                {
                    cout<<z<<" ";
                }
                else if(i==0 && j==m-1)
                {
                    cout<<y;
                }
                else{
                    cout<<"1"<<" ";
                }

            }
            cout<<endl;
        }
    }
    else{
        cout<<"Impossible"<<endl;
    }
    
   
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