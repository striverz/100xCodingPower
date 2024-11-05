

//The Dutch national flag algorithm used for sorting the array elements of 
//0 1 2 in O(N) time complexity

/*
Approch:

0 to low-1 consist of 0's

low to mid-1 consist of 1's 

mid to high constist of 0/1/2 in randome order

high+1 to the last consisit of 2's 


*/

#include<bits/stdc++.h>
using namespace std;
int main(){

	vector<int>arr={0,2,1,0,2,1};

	int low=0;
	int mid=0;
	int high=arr.size()-1;

	while(mid<=high){
		if(arr[mid]==0){
			swap(arr[mid],arr[low]);
			mid++;
			low++;
		}
		else if(arr[mid]==1){
			mid++;
		}
		else{
			swap(arr[mid],arr[high]);
			high--;
		}
	}

	for(auto it:arr) cout<<it<<" ";
}