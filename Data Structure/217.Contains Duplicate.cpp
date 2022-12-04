#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int>& nums)
    {
        map<long long int, long long int> counter;
        for(int i =0; i< nums.size(); i++)
        {
             counter[nums[i]]++;
            if( counter[nums[i]] > 1)
            {
                return true;
            }

            cout << "counter -- " << nums[i] << " --- -- " << counter[nums[i]] << endl;
        }

        return false;
    }
};

int main()
{
    cout << "Hello World" << endl;

    Solution ob;
    vector<int> nums = {1,2,3, 1, 3, 4, 4, 5, 6, 6, 1 };
    vector<int> nums2 = {1,1,1,3,3,4,3,2,4,2};

    bool output = ob.containsDuplicate(nums2);
    cout << "Output of checkers "<< output << endl;
}
