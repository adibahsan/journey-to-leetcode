#include<iostream>
#include<vector>

using namespace std;


class Solution
{
public:
    int a;
    static int pivotIndex(vector<int>& nums)
    {
        int sum = 0, leftSum = 0, rightSum = 0, currentIndex = 0;

        for(int i =0; i< nums.size(); i++){
            sum += nums[i];
        }
        rightSum = sum;

    //    cout << "sum is "<< sum <<endl;
 //      cout << "rightSum is "<< rightSum <<endl;

        for(int i =0; i< nums.size(); i++){
            if(i != nums.size() ){
                rightSum -= nums[i];
            } else rightSum = 0;

             if(i != 0 ){
                leftSum += nums[i-1];
            } else leftSum = 0;

            cout << "leftsum " << leftSum << " rightSum " << rightSum <<endl;
            if(leftSum == rightSum) return i;
        }


        return -1;

    }

    Solution(){
        a = 10;
    }
};


int main()
{
    cout << "Hellow World" <<endl;

    vector<int> input = {1,7,3,6,5,6};
    vector<int> input2 = {1,2,3};
    vector<int> input3 = {2,1,-1};
    cout << "PivotIndex" <<endl << Solution::pivotIndex(input) <<endl;
    cout << "PivotIndex" <<endl << Solution::pivotIndex(input2) <<endl;
    cout << "PivotIndex" <<endl << Solution::pivotIndex(input3) <<endl;
}
