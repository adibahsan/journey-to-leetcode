#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int numberOfMatches(int n) {
        int totalMatch = 0;
        while(n>1){
            if(n%2 == 0){
                totalMatch += n/2;
                 n=n/2;
            }
            else{
                totalMatch += (n-1)/2;
                n = (n-1)/2 +1;

            }
        }
        return totalMatch;
    }
};
int main()
{
    cout << "Hellow World" <<endl;
    Solution solution;

    cout << "Tournament Winners" << endl << solution.numberOfMatches(7) <<endl;



}
