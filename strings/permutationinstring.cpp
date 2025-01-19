//Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.
//In other words, return true if one of s1's permutations is the substring of s2.
//Input: s1 = "ab", s2 = "eidbaooo"
//Output: true

//Input: s1 = "ab", s2 = "eidboaoo"
//Output: false

class Solution {
private:
    bool checkequal(int a[26],int b[26]){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i]){
                return 0;
            }

        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
        //character count array
        int count[26]={0};
        for(int i=0;i<s1.length();i++){
            int index=s1[i]-'a';
            count[index]++;
        }

        //traverse  s2 string in window of size s1 length and compare
        int i=0;
        int windowSize=s1.length();
        int count2[26]={0};
        while(i<windowSize && i<s2.length()){
            int index=s2[i]-'a';
            count2[index]++;
            i++;

        }

        if (checkequal(count,count2)){
            return 1;

        }
        

        //further process
        while(i<s2.length()){
            char newchar=s2[i];
            int index=newchar-'a';
            count2[index]++;

            char oldchar=s2[i-windowSize];
            index=oldchar-'a';
            count2[index]--;
            i++;

            if (checkequal(count,count2)){
                return 1;
            }

        }

        return 0;
        
    }
};
