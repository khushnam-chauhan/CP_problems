#include<iostream>
#include<vector>
using namespace std;
vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> index; 
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                if(words[i][j]==x){
                  index.push_back(i);
                  break;
                  
            }
           
            }
          
        }
        return index;
        
}
int main(){
    vector<string> words={"leet","code"};
    char x='e';
    vector<int> ans= findWordsContaining(words,x);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}