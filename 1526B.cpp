//Problem - 1526B - I hate 1111 - Codeforces.
#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<math.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long 
#define pb push_back
#define mod 1000000007
#define F first
#define S second
#define mp make_pair
#define ss stack<int>
#define vi vector<int>
#define vll vector<long long>
#define all(x) (x).begin(),(x).end()
#define rep for(int i=n-1;i>=0;i--)
#define re for(int j=m-1;j>=0;j--)
using namespace std;
//You are given an integer x. You have to make x by summing up some number of 11,111,1111,11111,�
// (You can use any number among them any number of times).

//For instance,
//33=11+11+11
//144=111+11+11+11

int main(){
	int test; cin>>test;
	while(test--){
		ll x;cin>>x; 
		while(x>0){
			if(x%11==0 || x%111==0){
				cout<<"YES"<<"\n"; break;
			}
			x-=111;
			if(x<0){
			 cout<<"NO"<<"\n"; break;	
			} 
		}
	}
	return 0;
}
