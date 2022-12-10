#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k)
    {
        map <int64_t, int64_t> indexCounter;
        for(int i =0; i< nums.size(); i++)
        {
            if(indexCounter[nums[i]]!=0)
            {
                int diff = abs(i + 1 -  indexCounter[nums[i]]);
                cout << "checking diff for i="<< i << " diff = " << diff <<" map[i] " << indexCounter[nums[i]] <<endl;

                if (diff <= k)
                {
                    return true;
                }
                else
                {
                    indexCounter[nums[i]]= i+1;
                }

            }
            else
            {
                indexCounter[nums[i]] = i+1;
            }
            cout << "at "<< i <<" map[i]= " << indexCounter[nums[i]] << endl;
        }
        return false;
    }
};

int main()
{
    cout << "Hello World" << endl;

    Solution ob;
    vector<int> nums = {1,2,3,1,2,3 };
    vector<int> nums2 = {1,0,1,1};
    vector<int> nums3 = {1,2,3,4,6};

    bool output = ob.containsNearbyDuplicate(nums2, 1);
    cout << "Output of checkers "<< output << endl;
}

