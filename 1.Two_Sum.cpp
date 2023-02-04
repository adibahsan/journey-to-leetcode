#include<bits/stdc++.h>

using namespace std;

class Solution{

public:
    int twoSumSolver(vector<int> arr, int sum){

        unordered_map<int, bool> tables;

        for(int i =0; i< arr.size(); i++){
                int diff = sum - arr[i];

            if(tables[diff]){
                cout << "Found" <<endl;
                cout << diff << " + " << arr[i] <<" = " << sum <<endl;
                break;
            }
            else {
                tables[arr[i]] = true;
            }
        }

        return 0;
    }
};


int main(){
    Solution solution;

    vector<int> a = {1,2,3,4,5,6};
    int sum = 5;
    solution.twoSumSolver(a, sum);

}
