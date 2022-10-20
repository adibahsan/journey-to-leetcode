#include<iostream>
#include<vector>

using namespace std;

const string fizzBuzz = "FizzBuzz";
const string fizz = "Fizz";
const string buzz = "Buzz";

class Solution
{
public:
    int a;
    static vector<string> fizzBuzz(int n)
    {
        vector<string> output;
        for (int i = 1; i<=n; i++)
        {
            if(i %3 ==0 && i%5 == 0) output.push_back("FizzBuzz");
            else if(i%3 == 0) output.push_back("Fizz");
            else if(i%5 == 0) output.push_back("Buzz");
            else output.push_back(to_string(i));
        }

        return output;
    }
};


int main()
{
    cout << "Hellow World" <<endl;

    vector<int> input = {1,7,3,6,5,6};
    vector<int> input2 = {1,2,3};
    vector<int> input3 = {2,1,-1};
     Solution::fizzBuzz(5);
    //cout << "fizzBuzz" <<endl << Solution::fizzBuzz(3) <<endl;
}
