#include<bits/stdc++.h>

using namespace std;

int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        vector <pair<int,int>> time;
        int count = 0;
        stack <double> st; 

        for(int i=0; i<position.size(); i++){
            time.push_back(pair(position[i] , speed[i]));
        } 

        sort(time.begin(), time.end(), [](pair<int, int> &a, pair<int, int> &b) {
            return a.first > b.first;
        });

        for(pair<int, int> x: time){

            double curr = (double)(target - x.first) / x.second;

            if(!st.empty() && curr>st.top()){
                st.pop();
            }else if(st.empty()){
                st.push(curr);
                count++;
            }
        }

        
        return count;
    }


int main(){
  
  cout<< 5 + 2 * 3 - 1 / 2<<endl;
}