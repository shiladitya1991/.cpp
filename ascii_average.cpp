#include<bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	int len = s.length() ;

	int sum =0;

	for(int i=0;i<len;i++){
		sum = sum + (int)s[i];
		
	}

	cout << sum/len << endl;
}