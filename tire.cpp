#include<iostream>
using namespace std;

class TrieNode {
public:
    char data;
    TrieNode* children[26];
    bool isTerminal;
    
    TrieNode(char ch) {
        data = ch;
        for (int i = 0; i < 26; i++)
            children[i] = NULL;
        isTerminal = false;
    }
};

class Trie {
public:
    TrieNode* root;
    
    Trie() {
        root = new TrieNode('\0');
    }
    
    void insertUtil(TrieNode* root, string word) {
        // base case
        if (word.length() == 0) {
            root->isTerminal = true;
            return;
        }
        
        int index = word[0] - 'a';
        TrieNode* child;
        
        // if already present
        if (root->children[index] != NULL) {
            child = root->children[index];
        } else {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        
        insertUtil(child, word.substr(1));
    }
    
    void insertWord(string word) {
        insertUtil(root, word);
    }
    
    bool searchUtil(TrieNode* root, string word) {
        if (word.length() == 0) {
            return root->isTerminal;
        }
        
        int index = word[0] - 'a';
        TrieNode* child;
        
        if (root->children[index] != NULL) {
            child = root->children[index];
        } else {
            return false;
        }
        
        return searchUtil(child, word.substr(1));
    }
    
    bool searchWord(string word) {
        return searchUtil(root, word);
    }
    
    void removeUtil(TrieNode* root, string word) {
        if (word.length() == 0) {
            root->isTerminal = false;
            return;
        }
        
        int index = word[0] - 'a';
        TrieNode* child = root->children[index];
        
        if (child == NULL) {
            return;  // Word not found in the trie
        }
        
        removeUtil(child, word.substr(1));
        
        // Remove child node if it's not part of any other word and not a terminal node
        if (!child->isTerminal) {
            bool hasChild = false;
            for (int i = 0; i < 26; i++) {
                if (child->children[i] != NULL) {
                    hasChild = true;
                    break;
                }
            }
            
            if (!hasChild) {
                delete child;
                root->children[index] = NULL;
            }
        }
    }
    
    void removeWord(string word) {
        removeUtil(root, word);
    }
};

int main() {
    Trie* t = new Trie();
    t->insertWord("abcd");
    t->insertWord("abcde");
    
    cout << "Is 'abcd' present? " << t->searchWord("abcd") << endl;    // Output: 1 (true)
    cout << "Is 'abcde' present? " << t->searchWord("abcde") << endl;  // Output: 1 (true)
    
    t->removeWord("abcd");
    
    cout << "Is 'abcd' present after removal? " << t->searchWord("abcd") << endl;
}
// time complexcity is O(l)=lenghth of word of insertion 
//for seching the time complcity is O(l)