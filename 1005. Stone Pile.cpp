#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll mn;
ll ara[30];
vector<ll>v;
vector<ll>v2;


void recurr(ll u,ll n)
{
 //   printf("u = %d n = %d flag = %d\n",u,n,flag);
    if(u==n+1)
    {
        ll sum = 0,sum2 = 0;
        for(ll i=0;i<v.size();i++)
        {

            sum+=v[i];
        }


        for(ll i=0;i<v2.size();i++)
        {

            sum2+=v2[i];
        }

        mn = min(mn,abs(sum-sum2));


        return ;
    }
    v.push_back(ara[u]);
    recurr(u+1,n);
    v.pop_back();
    v2.push_back(ara[u]);
    recurr(u+1,n);
    v2.pop_back();
}

int main()
{
    ll n,m,b,i,j,x,y;

    while(scanf("%lld",&n)==1)
    {
        v.clear();
        v2.clear();
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&ara[i]);
        }

        mn = 1e18;

        recurr(1,n);

        printf("%lld\n",mn);
    }

return 0;
}
