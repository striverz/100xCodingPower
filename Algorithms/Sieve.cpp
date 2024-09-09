#include<bits/stdc++.h>
using namespace std;

//The possible number for prime checking
int N=1e7;
vector<int>isPrime(N+1,1);
void precomputeSieve(){
	isPrime[0]=0;
	isPrime[1]=0;
    
    //going from the first PrimeNumber 
	for(int i=2;i*i<=N;i++){

		if(isPrime[i]){

			for(int j=i*i;j<=N;j+=i){
				//Marking all it's multiples bcz they are no long prime numbers
				isPrime[j]=0;
			}
		}

	}
}

int main(){
	precomputeSieve();

	int q;
	cin>>q;

	while(q--){
		int x;
		cin>>x;

		if(isPrime[x]) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}