//You are given a string s consisting of lowercase English letters.
//A duplicate removal consists of choosing two adjacent and equal letters and removing them.




class Solution {
public:
    string removeDuplicates(string s) {
        for(int i=1;i<s.length();i++)
    {
        if(s[i] == s[i-1])
        {
            s.erase(i-1,2);
            if(i-2>0){
                i-=2;
            }
            else{
                i=0;
            }
        }
    }
    
    return s;
    }
};
