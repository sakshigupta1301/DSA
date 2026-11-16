class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int l=0;
        for(int i : st){
            if(st.find(i-1) == st.end()){
                int countnum=i;
                int count=1;
                while(st.find(countnum+1) != st.end()){
                    countnum++;
                    count++;
                }
                 l = max(l,count);
            }
        }
        return l;
    }
};