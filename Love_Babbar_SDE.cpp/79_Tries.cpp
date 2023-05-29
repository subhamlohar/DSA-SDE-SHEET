#include <bits/stdc++.h>
using namespace std;

class TrieNode{
    public:
        char data;
        TrieNode* children[26];
        bool isTerminal;

        TrieNode(char ch){
            data=ch;
            for(int i=0;i<26;i++){
                children[i]=NULL;
            }
            isTerminal=false;
        }
};

class Trie{
    public:
    TrieNode* root;

    Trie(){
        root=new TrieNode('\0');
    }

    void insertUtil(TrieNode* root,string word){
        //base case
        if(word.length()==0){
            root->isTerminal=true;
            return;
        }

        //assumption words will be in CAPS
        int index=word[0]-'A';
        TrieNode* child;

        //Present
        if(root->children[index] !=NULL){
            child=root->children[index];
        }
        else{
            //absent
            child=new TrieNode(word[0]);
            root->children[index]=child;
        }
        //recurtion
        insertUtil(child,word.substr(1));
    }
    
    void insertWord(string word){
        insertUtil(root,word);
    }

    bool searchUtil(TrieNode* root,string word){
        //base case
        if(word.length()==0){
            return root->isTerminal;
        }

        int index=word[0]-'A';
        TrieNode* child;

        //present
        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        else{
            //absent
            return false;
        }
        //recursion
        return searchUtil(child,word.substr(1));

    }

    bool searchWord(string word){
        return searchUtil(root,word);
    }

    void deleteUtil(TrieNode* root,string word){
        if(searchWord(word)){
            root->isTerminal=false;
        }
    }

    void deleteWord(string word){
        deleteUtil(root,word);
    }
};

int main(){
    Trie *t=new Trie();
    t->insertWord("ABCD");
    t->insertWord("DO");
    t->insertWord("TIME");
    

    cout<<"Present or not : "<<t->searchWord("ABCD")<<endl;
    cout<<"Present or not : "<<t->searchWord("TIM")<<endl;

    t->deleteWord("ABCD");
    cout<<"Present or not : "<<t->searchWord("ABCD")<<endl;

    return 0;
}