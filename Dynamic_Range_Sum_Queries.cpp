//https://cses.fi/problemset/task/1648/
//Fenwick Tree or BIT
#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> BIT;
vector<int> a;
int n,q;
void update(int i,int val)
{
    while(i<=n)
    {
        BIT[i]+=val;
        i+=(i&(-i));
    }
}
int cal(int i)
{
    int s=0;
    while(i>0)
    {
        s+=(BIT[i]);
        i-=(i&(-i));
    }
    return s;
}
int32_t main()
{

    cin >> n >> q;   
    BIT.resize(n+1);
    a.resize(n+1);
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        update(i,a[i]);
    }
    while(q--)
    {
        int op;
        cin >> op;
        if(op==1)
        {
            int i,val;
            cin >> i >> val;
            update(i,val-a[i]);
            a[i]=val;
        }
        else if(op==2)
        {
            int l,r;
            cin >> l >> r;
            int res = cal(r)-cal(l-1);
            cout << res << "\n";
        }
    }
}
