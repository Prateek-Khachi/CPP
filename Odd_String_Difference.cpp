#include<iostream>
#include <vector>
#include<string>
using namespace std;

int main()
{
    vector<string> words = {"abcd", "efgh", "ijkl", "mnor"}; 

int n = words[0].size();

        vector<vector<int>> tdiff;
        for(int i=0;  i<words.size(); i++){
            vector <int> diff;

            for(int j=0; j<n-1; j++){
                
              diff.push_back(words[i][j+1] - words[i][j]);

            }
            tdiff.push_back(diff);
        }

        int z;
            
       if(tdiff[0]==tdiff[1]){

        for(int i=1; i<words.size()-1; i++){
            if(tdiff[1]!=tdiff[i+1]){
            z = i+1;
        }

       }
       }

       else{

            if(tdiff[0]==tdiff[2]){
                z = 1;
            }

            else
            {
                z = 0;
            }

       }
        cout<< words[z];

}