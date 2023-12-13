#include<iostream>
#include<vector>
using namespace std;
vector<int> runningSum(vector<int>& nums) {
    int sum=0;
    vector<int> runSum;
        for(int i=0;i<nums.size();i++){
                sum= sum+nums[i];
                runSum.push_back(sum);
        }
    return runSum;
}
int main(){
    vector<int> arr={1,2,3,4,5};
    vector<int> result= runningSum(arr);
    for (int  i = 0; i < arr.size(); i++)
    {
        cout<<result[i]<<" ";
    }
    
}