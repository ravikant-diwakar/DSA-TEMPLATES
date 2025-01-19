//There is a sequence of words in CamelCase as a string of letters, , having the following properties:

//It is a concatenation of one or more words consisting of English letters.
//All letters in the first word are lowercase.
//For each of the subsequent words, the first letter is uppercase and rest of the letters are lowercase.
//example:- s='oneTwoThree'
//output=3


int camelcase(string s) {
    int count=1;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' & s[i]<='z'){
            continue;
        }
        else{
            count++;
        }
        
    }
    
    return count;
}
