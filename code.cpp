#include<bits/stdc++.h>

using namespace std;

int sum =0;

void solve(vector<int> skill, int index, vector<int> arr){

    if(index == skill.size())
    {
        if(arr.empty()){
            return ;
        }
        
        sum = sum +  (arr[arr.size()-1] * arr[arr.size()-1] * arr[0]);
        return;
    }

    for(int i=index; i<skill.size(); i++){
      
        arr.push_back(skill[i]);
        solve(skill, i+1, arr);
        arr.pop_back();
        solve(skill, i+1, arr);

   }
}

int main(){

   // sum = 0;

    vector<int> skill = {4,2,9};
    vector<int> arr;
    sort(skill.begin(), skill.end());
    solve(skill , 0, arr);
    cout<<sum<<endl;
}