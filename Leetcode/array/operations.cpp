#include<iostream>
#include<vector>
using namespace std;
int finalValueAfterOperations(vector<string>& operations){
     int x=0;
        int n=operations.size();
        for(int i=0;i<n;i++){
            if((operations[i]=="X++") || (operations[i]=="++X")){
                x++;
            }
            else{
                x--;
            }

        }
        return x;
}

int main(){
    vector<string> operations = {"--X","X++","X++"};
    int ans= finalValueAfterOperations(operations);
    cout<<ans;


}