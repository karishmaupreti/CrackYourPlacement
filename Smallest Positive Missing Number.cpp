class Solution {
 public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        unordered_set<int>st;
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                st.insert(arr[i]);
            }
        }
        int missing=1;
        while(st.find(missing)!=st.end()){
            missing++;
        }
        return missing;
    } 
};
