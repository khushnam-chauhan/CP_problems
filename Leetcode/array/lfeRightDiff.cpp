#include<iostream>
#include<vector>
using namespace std;

vector<int> leftRightDifference(vector<int>& nums) {
    vector<int>answer;
    int sum=0;
    for (int i=0;i<nums.size();i++){
            int leftSum=0;
            int rightSum=0;
            
                for(int j=0;j<i;j++){
                    leftSum+=nums[j];
                }
    
                for(int j=i+1;j<nums.size();j++){
                    rightSum+=nums[j];
                }

        
         sum=abs(leftSum-rightSum);
         answer.push_back(sum);


        }

        return answer;

}

int main(){
    vector<int> arr={10,4,8,3};
    vector<int> result=leftRightDifference(arr);
    for (int i = 0; i < arr.size(); i++)
    {
       cout<<result[i]<<" ";
    }
    
    return 0;
}