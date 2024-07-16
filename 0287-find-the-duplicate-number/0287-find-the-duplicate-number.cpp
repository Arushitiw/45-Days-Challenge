class Solution {
public:
    int findDuplicate(vector<int>& nums) {
     int n=nums.size();
     int ans=0;
     for(int i=0;i<n;i++){
        int index=abs(nums[i]);//[1,3,4,2,2]
        if(nums[index]<0){//-2<0 -->2 is ans
            ans=index;//ans=2
        }
        nums[index]*=-1;//[-1,-3,-4,-2,2]
     }
     return ans;
    }
};