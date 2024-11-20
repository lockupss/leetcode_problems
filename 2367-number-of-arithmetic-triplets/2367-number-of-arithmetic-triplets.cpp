class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
    int x=0;   
    int size=nums.size();
       for(int i=0; i<=size-1; i++){
        for(int j=i+1; j<=size-1; j++){
            for(int k=j+1; k<=size-1; k++){
               if(i<j && j<k && i<k && nums[j] - nums[i] == diff &&nums[k] - nums[j] == diff) {
               x++;
               
               }
            }
        }
       } 
       return x;
    }
};