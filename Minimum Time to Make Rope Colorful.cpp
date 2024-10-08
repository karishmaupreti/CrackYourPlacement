class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans=0;
        for(int i=1;i<colors.size();i++){
            if(colors[i]==colors[i-1]){
                ans+=min(neededTime[i],neededTime[i-1]);
                if(neededTime[i]>neededTime[i-1]){
                    neededTime[i]=neededTime[i];
                }
                else{
                    neededTime[i]=neededTime[i-1];
                }
            }

        }
        return ans;
    }
};
