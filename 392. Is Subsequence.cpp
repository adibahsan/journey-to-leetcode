
#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    bool isSubsequence(string s, string t) {
        int k =0;
        for(int i =0; i<t.length(); i++ ){
            if(s[k]==t[i]){
                k++;
            }
        }
       return k == s.length();
    }
};


int main(){
Solution solution;
string s1 = "cari", s2 = "raacaaar";
cout << solution.isSubsequence(s1, s2) << endl;

}

