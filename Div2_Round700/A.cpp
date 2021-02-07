/*******************************************************
Name Problem:Yet Another String Game
Problem Category:category
Problem Tester: Julio Cesar Mamani Villena.
Email: mamanivillenajc@gmail.com
*******************************************************/
#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define MOD 1000000007
#define EPS 1e-9
#define all(x) x.begin(),x.end()
#define fast(); ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
using namespace std;
string game(string a){
	string b;
	for(int i=0; i<a.length(); i++){
		if(i%2==0){
			// Alice turn
			if(a[i]=='a')
				b.push_back('b');
			else
				b.push_back('a');
		}else{
			// Bob turn
			if(a[i]=='z')
				b.push_back('y');
			else
				b.push_back('z');
		}
	}
	return b;
}
void solve(){
    int t;
    cin>>t;
    while(t--){
    	string a;
    	cin>>a;
    	cout<<game(a)<<'\n';
    }
}
int main(){
    fast();
    solve();
    return 0;
}