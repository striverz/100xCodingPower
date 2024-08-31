class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        

        vector<int>ans;
        deque<int>dq;


        //Intially store the first k window and maintains the maxElement in the beginning
        for(int i=0;i<k;i++){
            while(!dq.empty() and nums[i]>nums[dq.back()]) dq.pop_back();
            dq.push_back(i);
        }
        for(int i=k;i<nums.size();i++){
            //stroing the answer 
            ans.push_back(nums[dq.front()]);

            //if the window is oversized they we have to remove the value
            if(!dq.empty() and dq.front()==i-k) dq.pop_front();

            while(!dq.empty() and nums[i]>nums[dq.back()]) dq.pop_back();
            dq.push_back(i);
        }
        ans.push_back(nums[dq.front()]);


        return ans;
    }
};