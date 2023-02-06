#include<bits/stdc++.h>

using namespace std;

#define MAX_COUNT 256
class Solution {
public:
    // using sorting
    bool isAnagram(string s, string t) {
        int sLen = s.length();
        int tLen = t.length();

        if(sLen != tLen){
            return false;
        }

        sort(s.begin(), s.end());
        sort (t.begin(), t.end ());
        return s == t;
    }
    // using array
    bool isAnagramArray(string s, string t) {
        int sLen = s.length();
        int tLen = t.length();

        int counter[MAX_COUNT] = {0};

        if(sLen != tLen){
            return false;
        }

        for(int i =0; s[i] & t[i]; i++){
            counter[s[i]]++;
            counter[t[i]]--;
        }

        for(int i =0; i< MAX_COUNT; i++){
                cout << "s[i] " << counter[i] << endl;
            if(counter[i] != 0) return false;
        }

        return true;
    }
};


int main(){
Solution solution;
string s1 = "car", s2 = "rax";
cout << solution.isAnagramArray(s1, s2) << endl;

}

