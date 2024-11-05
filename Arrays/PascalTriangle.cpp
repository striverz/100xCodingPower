

/*
The parcel Triangle consist of 3 variations

variation1:

row and column is given and find the value in that row and col


variation2:

row is given now print all values in that row

variation3:
ros is given now print all rows and columns upto that row
*/


#include<bits/stdc++.h>
using namespace std;
int pacelTriangle1(int row,int col){

	//the formula to find is (row-1)C(col-1)
	row--;
	col--;
	long long ans=1;
	for(int i=0;i<col;i++){
		ans=ans*(row-i);
		ans=ans/(i+1);
	}
	return ans;
}

vector<int> pacelTriangle2(int row){
	vector<int>result;

	long long ans=1;

	for(int i=1;i<=row;i++){
		result.push_back(ans);
		ans=ans*(row-i);
		ans=ans/i;
		
	}
	return result;
}

vector<vector<int>>pacelTriangle3(int row){

	vector<vector<int>>result;

	for(int i=1;i<=row;i++){
		vector<int>ans=pacelTriangle2(i);
		result.push_back(ans);
	}
	return result;
}
int main(){

    //version-01
	cout<<pacelTriangle1(5,3)<<endl; //fifths row and the third column

	//version-02
	vector<int>ans1=pacelTriangle2(5); //fifth row
	for(auto it:ans1) cout<<it<<" ";
	cout<<endl;

	//version-03
	vector<vector<int>>ans2=pacelTriangle3(5); //upto fifth
    for(auto it:ans2){
    	for(auto it1:it) cout<<it1<<" ";
    	cout<<endl;
    }



}