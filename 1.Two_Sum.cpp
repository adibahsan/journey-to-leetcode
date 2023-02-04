#include<bits/stdc++.h>

using namespace std;

class Solution{

public:
vector<int> twoSum(vector<int>& nums, int target){

unordered_map<int, int> indexTables;

for(int i =0; i< nums.size(); i++){
    int diff = target - nums[i];

if(indexTables[diff]!= 0){
//        cout << "Found" <<endl;
//        cout << diff << " + " << nums[i] <<" = " << target <<endl;
//        cout << "index = " << indexTables[diff]-1 << " & " << i <<endl;
    vector<int> output = {indexTables[diff]-1, i};
   return output;
}
else {
//        cout << "not found " << nums[i]   << endl;
        indexTables[nums[i]] = i+1;
}
}
return {};
}


};


int main(){
Solution solution;

vector<int> a = {1,2,3,4,5,6};
int sum = 11;
solution.twoSum(a, sum);

}
