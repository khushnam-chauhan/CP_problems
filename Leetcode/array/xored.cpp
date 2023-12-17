#include<iostream>
#include<vector>
using namespace std;
vector<int> decode(vector<int>& encoded, int first){
    vector<int> decoded;
    decoded.push_back(first);
    for(int element: encoded){
        decoded.push_back(element);
    }
    for (int i = 0; i+1 < decoded.size() ; i++)
    {
        decoded[i+1]=decoded[i]^decoded[i+1];
    }
    return decoded;
    
}
void printArray(vector<int> arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    vector<int> encoded={1,2,3};
    int first=1;
    printArray(encoded);
    cout<<endl;
    vector<int> dec=decode(encoded,first);
    printArray(dec);
    return 0;

}