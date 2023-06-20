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
    
    bool shouldDeleteNode(TrieNode* node) {
        for (int i = 0; i < 26; i++) {
            if (node->children[i] != NULL) {
                return false;  // Node has non-null child, don't delete
            }
        }
        return true;  // Node can be safely deleted
    }
    
    bool removeUtil(TrieNode* root, string word, int index) {
        if (index == word.length()) {
            if (!root->isTerminal) {
                return false;  // Word not found in the trie
            }
            root->isTerminal = false;
            return shouldDeleteNode(root);
        }
        
        int charIndex = word[index] - 'a';
        TrieNode* child = root->children[charIndex];
        
        if (child == NULL) {
            return false;  // Word not found in the trie
        }
        
        bool shouldDeleteChild = removeUtil(child, word, index + 1);
        
        if (shouldDeleteChild) {
            delete child;
            root->children[charIndex] = NULL;
            return shouldDeleteNode(root);
        }
        
        return false;
    }
    
    void removeWord(string word) {
        removeUtil(root, word, 0);
    }
};

int main() {
    Trie* t = new Trie();
    t->insertWord("abcd");
    t->insertWord("abcde");
    
    cout << "Is 'abcd' present? " << t->searchWord("abcd") << endl;
    t->removeWord("abcd");    //
    cout << "Is 'abcd' present? " << t->searchWord("abcd") << endl;
}