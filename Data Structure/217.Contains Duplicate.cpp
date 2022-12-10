#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool containsDuplicateMap(vector<int>& nums)
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

    // array solution if numbers are positive only
    bool containsDuplicateArr(vector<int>& nums)
    {
        int arr[nums.size()] = {0};
        for(int i =0; i< nums.size(); i++)
        {
            arr[nums[i]]++;
            if( arr[nums[i]] > 1)
            {
                return true;
            }

            cout << "counter -- " << nums[i] << " --- -- " << arr[nums[i]] << endl;
        }

        return false;
    }


    // Using Unorderred Set // TC = O(n), s
    bool containsDuplicate(vector<int>& nums)
    {
        // int arr[nums.size()] = {0};
        unordered_set<int> arr;
        for(int i =0; i< nums.size(); i++)
        {
            arr.insert(nums[i]);
        }

        if(nums.size() == arr.size()) return false;

        else return true;
    }
};

int main()
{
    cout << "Hello World" << endl;

    Solution ob;
    vector<int> nums = {1,2,3, 1, 3, 4, 4, 5, 6, 6, 1 };
    vector<int> nums2 = {1,1,1,3,3,4,3,2,4,2};
    vector<int> nums3 = {1,2,3,4,6};

    bool output = ob.containsDuplicate(nums);
    cout << "Output of checkers "<< output << endl;
}
