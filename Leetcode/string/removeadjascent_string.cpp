#include<iostream>
#include<vector>
#include<string>
using namespace std;

string remove_adjacent_same_string(string s){
    int n= s.length();
    string ans="";
    for (int i=0; i<n; i++){
        if(ans.length()>0){
            if(ans[ans.length()-1] == s[i]){
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);

            }

        }
        else{
            ans.push_back(s[i]);
        }
    }
    return ans;

}

int main(){

    string s="abbaca";
    string res=remove_adjacent_same_string(s);
    cout<<res<<endl;
    return 0;


}