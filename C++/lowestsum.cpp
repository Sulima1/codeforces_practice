#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int T,n,a[30],b[30];
int main(){
	for(cin>>T;T;T--){
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		for(int i=1;i<=n;i++)cin>>b[i];
		ll ans=0;
		for(int i=2;i<=n;i++)
			ans+=min(abs(a[i]-a[i-1])+abs(b[i]-b[i-1]),abs(a[i]-b[i-1])+abs(b[i]-a[i-1]));
		cout<<ans<<endl;
	}
}