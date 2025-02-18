#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&line){
     int minFuel = -1;

     for(int i=1; i<line.size(); i++){
        if(i == line.size()-1){
            minFuel = max(minFuel, 2*(line[i]-line[i-1]));
        }
        else{
            minFuel = max(minFuel, (line[i]-line[i-1]));
        }
     } // O(n)

     cout << minFuel << endl;
}

/*
    time complexity  : O(n)
    space complexity : O(n)
*/

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n,x;
        cin >> n >> x;
        vector<int>line;

        line.push_back(0);

        for(int i=0; i<n; i++){
            int pos;
            cin >> pos;
            line.push_back(pos);
        }
        line.push_back(x);

        solve(line);
    }
    return 0;
}