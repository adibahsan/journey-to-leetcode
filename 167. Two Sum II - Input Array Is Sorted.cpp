#include<bits/stdc++.h>

using namespace std;

class Solution{

public:
vector<int> twoSum(vector<int>& nums, int target){

int left = 0, right = numbers.size() -1;
cout << left << right <<endl;

while (left != right){
    int temp = numbers[left] + numbers[right];

//    cout << "temp " <<temp << " left " << left << " right " << right << endl;
    if(temp > target){
        right--;
    }
    else if (temp < target){
        left++;
    }
    else return {left+1, right+1};
}

return {};
}


};


int main(){
Solution solution;

vector<int> a = {1,2,3,4,5,6,7,8,9};
int sum = 8;
solution.twoSum(a, sum);

}
