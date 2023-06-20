#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void recurPermute(string& ds, string& s, vector<string>& ans, int freq[]) {
    if (ds.length() == s.length()) {
        ans.push_back(ds);
        return;
    }
    for (int i = 0; i < s.length(); i++) {
        if (freq[i]==0) {
            ds += s[i];
            freq[i] = 1;
            recurPermute(ds, s, ans, freq);
            freq[i] = 0;
            ds.pop_back();
        }
    }
}

vector<string> findPermutations(string& s) {
    vector<string> ans;
    string ds;
    int freq[s.length()] = {0};
    recurPermute(ds, s, ans, freq);
    
    // Sort the permutations lexicographically
    sort(ans.begin(), ans.end());
    
    // Remove duplicates
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    
    return ans;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    
    vector<string> permutations = findPermutations(s);
    
    cout << "Unique permutations of " << s << " in lexicographically sorted order:\n";
    for (const string& perm : permutations) {
        cout << perm << "\n";
    }
    
    return 0;
}
