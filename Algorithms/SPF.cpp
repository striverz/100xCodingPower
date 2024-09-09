#include<bits/stdc++.h>
using namespace std;

//for finding the smallest prime factor
int N=1e7;
vector<int>SPF(N+1);
void precomputeSPF(){
	
	for(int i=1;i<=N;i++){
		SPF[i]=i;
	}

	for(int i=2;i*i<=N;i++){
		if(SPF[i]==i){
			
			for(int j=i*i;j<=N;j+=i){
				if(SPF[j]==j){
					SPF[j]=i;
				}
			}
		}
	}
    
    
}

int main(){
	precomputeSPF();

	int q;
	cin>>q;

	while(q--){
		int x;
		cin>>x;

		int cntDivisors=1;

		while(x!=1){

			int primeFactor=SPF[x];
			int cnt=0;
			while(x%primeFactor==0){
				cnt++;
				x/=primeFactor;
			}
			cout<<primeFactor<<"^"<<cnt<<"*";
			cntDivisors*=(cnt+1);
		}

		//for finding the total number of divisors of a number in less complexity
		cout<<endl;
		cout<<cntDivisors<<endl;

		
	}
}