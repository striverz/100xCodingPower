#include<bits/stdc++.h>
using namespace std; 

void bubbleSort(vector<int>&arr,int n){

	for(int i=0;i<n-1;i++){ //Indicates the number of passes(n-1);

		int flag=0; //check condition for adaptbility

		for(int j=0;j<n-1-i;j++){ //no of comparisions + swaps(max_swaps)

			if(arr[j]>arr[j+1]){
				
				flag=1;

				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;

			}
		}
		if(flag==0) break;

	}
	return;
}
int main(){
	vector<int>arr={5,4,3,2,1};
	bubbleSort(arr,arr.size());

	for(auto it:arr) cout<<it<<" ";
}