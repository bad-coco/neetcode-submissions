class Solution {
   private:
   string generateWord(string str){
    string newWord = "";
    vector<int> alphabets(26,0); 
    for(auto ch:str){
        alphabets[ch-'a']++;
    }
    for(int i=0;i<26;i++){
        if(alphabets[i]!=0){
            newWord.append(alphabets[i],i+'a');
        }
    }
    return newWord;
   }
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> freq;
        vector<vector<string>> result;
        for (auto str : strs) {
            string newWord = generateWord(str);
            freq[newWord].push_back(str);
        }
        for (auto& pair : freq) {
            result.push_back(pair.second);
        }
        return result;
    }
};

// stops = >  o:1, p:1 , s: 2, t: 1 