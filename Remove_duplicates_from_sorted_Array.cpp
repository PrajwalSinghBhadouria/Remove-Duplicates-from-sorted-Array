class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        int s = mp.size();
        int j=0;
        for(auto z : mp){
            nums[j]=z.first;
            j++;
        }
        
        return s;
    }
};
