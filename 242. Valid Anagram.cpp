#include<bits/stdc++.h>

using namespace std;

#define MAX_COUNT 123
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

        int counter[MAX_COUNT] = {0};

//        int a = 'a';
//        int b = 'z';
//        cout << a -97 << b -97 << endl;
        int i = 0;

        for( i =0; s[i] & t[i]; i++){
            counter[s[i]]++;
            counter[t[i]]--;
        }

        // updated length logic
        if (s[i] || t[i]) {
            return false;
        }

        for(int i =0; i< MAX_COUNT; i++){
//                cout << "s[i] " << counter[i] << endl;
            if(counter[i] != 0) return false;
        }

        return true;
    }
};


int main(){
Solution solution;
string s1 = "car", s2 = "rac";
cout << solution.isAnagramArray(s1, s2) << endl;

}

