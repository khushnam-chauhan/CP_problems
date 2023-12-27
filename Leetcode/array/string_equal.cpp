#include<iostream>
#include<vector>
using namespace std;
bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string w1;
        string w2;
        for(int i=0;i<word1.size();i++){
            w1=w1+word1[i];
        }
        for(int i=0;i<word2.size();i++){
            w2=w2+word2[i];
        }
        if(w1==w2){
            return true;
        }
        return false;
}

int main(){
    vector<string> word1={"ab", "c"};
    vector<string> word2={"a", "bc"};
    bool result= arrayStringsAreEqual(word1,word2);
    if (result==true)
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    
}