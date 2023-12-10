#include<iostream>
#include<vector>
using namespace std;
vector<int> gradingStudents(vector<int> grades) {
    vector<int> result;
    for (int i=0; i<grades.size(); i++) 
    {
       
            for (int j=1; j<3; j++) {
                if((grades[i]+j)%5==0 && grades[i] + j >= 40){
                    grades[i]+=j;
                    break;
                }
            }   
    
        result.push_back(grades[i]);
    }
    
    return result;

}

int main(){
    vector<int> grades={73,67,38,33};
    vector<int> res= gradingStudents(grades);
    cout<<"original : ";
    for(int i:grades){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"graced   :";

   for(int i:res){
    cout<<i<<" ";
   }
return 0;
}