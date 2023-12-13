#include <iostream>
#include <vector>
using namespace std;

int mostWordsFound(vector<string>& sentences) {
        int max=0;
        for(int i=0; i<sentences.size();i++){
            int count=0;
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j]==' '){
                    count++;
                }

            }
            if(count>max){
                max=count;
            }
        }
        return max+1;
    }


int main() {
    vector<string> sentences = {
        "This is a sample sentence.",
        "Another example with more words.",
        "Short one.",
        "The longest sentence with a lot of words in it."
    };

    int result = mostWordsFound(sentences);

    cout << "Maximum number of words in any sentence: " << result << endl;

    return 0;
}
