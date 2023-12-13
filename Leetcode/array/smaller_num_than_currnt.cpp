#include<iostream>
#include<vector>
using namespace std;
vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> smaller;
        
        for(int i=0; i<nums.size();i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
             
                    if(nums[i]>nums[j]){
                    count++;
                    
                }
            }
            smaller.push_back(count);
        }
        return smaller;
}

int main(){
    vector<int> arr={8,1,2,2,3};
    vector<int> result= smallerNumbersThanCurrent(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}