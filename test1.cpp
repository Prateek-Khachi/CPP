//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  
    void solve(vector<vector<int>>& mat, int R, int C,  vector<vector<bool>>& visited, string& temp, vector<string>& ans){
        //cout<<R<<" "<<C<<" and "<<temp<<endl;
        
        if(R>=mat.size() || C>=mat[0].size() || R<0 || C<0 || visited[R][C] ==true || mat[R][C]==0){
            return ;
        }
        
        if(R == mat.size()-1 && C== mat[0].size()-1){
            ans.push_back(temp);
            return;
        }
        
        
        visited[R][C] = true;
        temp+='D';
        solve(mat, R+1, C, visited, temp, ans);
        temp.pop_back();
        temp+='U';
        solve(mat, R-1, C, visited, temp, ans);
        temp.pop_back();
        temp+='R';
        solve(mat, R, C+1, visited, temp, ans);
        temp.pop_back();
        temp+='L';
        solve(mat, R, C-1, visited, temp, ans);
        temp.pop_back();
        
        visited[R][C] = false;
        return ;
    }
  
    vector<string> findPath(vector<vector<int>> &mat) {
        // code here
        vector<vector<bool>> visited(mat.size(),vector<bool>(mat.size(),false));
        string temp="";
        vector<string> ans;
        solve(mat, 0, 0, visited, temp, ans);
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    vector<vector<int>> mat = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};

    Solution ob;
    vector<string> ans = ob.findPath(mat);
    for(auto x:ans){
        cout<<x<<endl;
    }
    return 0;
}

// } Driver Code Ends