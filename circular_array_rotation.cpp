//shiladitya
#include <bits/stdc++.h>
#define ll long long
#define f(i,a,b) for(ll i=a;i<b;i++)
#define mod (1000*1000*1000+7)
#define vi vector < int >
#define vb vector < bool >
#define vl vector < ll >
#define vvi vector < vector <int> >
#define vvc vector < vector <char> > 
#define pqueue priority_queue< int >
#define pdqueue priority_queue< int,vi ,greater< int > >

using namespace std;

int main(){
	ll n,k,q;
	map <ll,ll> map1;

	cin >> n >> k >> q;

	for(int i=0;i<n;i++){
		ll x;
		cin >> x;
		map1[i] = x;
	}

	map <ll,ll> map2;

	for(int i=0;i<n;i++){
		map2[(i+k)%n] = map1[i];
	}

	while(q--){
		ll elem;
		cin >> elem;
		cout << map2[elem] << endl;
	}



}