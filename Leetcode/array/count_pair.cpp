#include<iostream>
#include<vector>
using namespace std;

int countPairs(vector<int>& nums, int target) {
    int count=0;
    for(int i=0;i<nums.size();i++){
         for(int j=i+1;j<nums.size();j++){
             if(i>=0 && i<j && j<nums.size()){
                 if(nums[i]+nums[j]<target){
                    count++;

                }
            }
        }
    }
     return count;
        
}
int main(){
    vector<int> arr={-1,1,2,3,1};
    int target=2;
    int result=countPairs(arr,target);
    cout<<result;
    

}