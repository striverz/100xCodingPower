#include<bits/stdc++.h>
using namespace std; 

void mergeArray(vector<int>&arr,int low,int mid,int high){
	int left=low,right=mid+1;
	vector<int>temp;

	while(left<=mid && right<=high){
		if(arr[left]<=arr[right]){
			temp.push_back(arr[left++]);
		}
		else temp.push_back(arr[right++]);
	}

	//if left elements remain
	while(left<=mid) temp.push_back(arr[left++]);

	//if right elements remain
	while(right<=high) temp.push_back(arr[right++]);

    //changing the sorted array elements in temp to normal array
	for(int i=low;i<=high;i++){
		arr[i]=temp[i-low];
	}
	return;
}

//for dividing the Array in to two equal halves
void mergeSort(vector<int>&arr,int low,int high){
	if(low==high) return;

	int mid=(low+high)>>1;

	mergeSort(arr,low,mid);
	mergeSort(arr,mid+1,high);

	mergeArray(arr,low,mid,high);


}

void print(vector<int>&arr){
	for(auto it:arr) cout<<it<<" ";
}
int main(){
	vector<int>arr={3,2,8,5,1,4,23};
	int n=arr.size();

	mergeSort(arr,0,n-1);

	print(arr);
}