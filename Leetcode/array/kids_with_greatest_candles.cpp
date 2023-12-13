#include<iostream>
#include<vector>
using namespace std;

 vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
     int max=0;
     vector<bool> result;
     for(int i=0;i<candies.size();i++){
        if(candies[i]>max){
             max=candies[i];
        }
     }
     for(int i=0; i<candies.size();i++){
         if((candies[i]+extraCandies)>=max){
             result.push_back(true);

         }
         else{
             result.push_back(false);
          }
    }
     return result;
        
}
int main(){
    vector<int> candles={2,3,5,1,3};
    int extraCandies=3;
    vector<bool> result=kidsWithCandies(candles,extraCandies);
    for(int i=0; i<candles.size();i++){
        cout<<result[i]<<" ";
    }
}