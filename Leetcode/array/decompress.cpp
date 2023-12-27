#include<iostream>
#include<vector>
using namespace std;
vector<int> decompressRLElist(vector<int>& nums) {
    vector<int> result;
    for (int i = 0; i < nums.size(); i+=2)
    {
        int fre=nums[i];
        int value=nums[i+1];
        for (int j = 0; j < fre; j++)
        {
            result.push_back(value);
        }
        
    }
    return result;
    
}
int main(){
vector<int> nums={1,2,3,4};
vector<int> result=decompressRLElist(nums);
for(int i:result){
    cout<<i<<" ";
}
return 0;
}