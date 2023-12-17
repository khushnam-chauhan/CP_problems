#include<iostream>
#include<vector>
using namespace std;
 int maximumWealth(vector<vector<int>>& accounts) {
        int max=0;
        
        for(int i=0; i<accounts.size();i++){
            int sum=0;
            for(int j=0;j<accounts[i].size();j++){
                sum=sum+accounts[i][j];
            }
            cout<<endl;
            if (max<sum){
                max=sum;
            }
        }
        return max;
}
int main(){
    vector<vector<int> > arr = {{1,2,3},{3,2,1}};
    int ans=maximumWealth(arr);
    cout<<ans;
}