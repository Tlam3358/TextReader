#include <fstream>
#include <vector>
#include <string>
#include <map>
#include <iostream>
#include "sanitize.hpp"

using namespace std;

class TextReader {

private:

    map<string, vector<string>> wordFollowers;

public:
    
    void readIn(const string & filename);

    bool isEndPunctuation(const char & character);

    vector<string> getValues(const string & key);

    bool search(const string& key);

    size_t howManyfollowers(const string& key);
    
};

void TextReader::readIn(const string& filename) {
/*std::ifstream textfile(filename);
std::strin word;
std::string old_word = "^";
    while (textfile >> word){
        textfile.ignore();
        sanitize(word);
    
    if(isEndPunctuation(word[word.size() - 1])){
        std::string punctuation(1, word[word.size() - 1]);
        word = word.substr(0, word.size() - 1);
        markov_chain[old_word].push_back(word);

    }
    }

*/

}


bool TextReader::isEndPunctuation(const char& character) {

if (character == ".")
    return true;

else if (character == "?")
    return true;

else if (character == "!")
    return true;

else
    return false;



}



vector<string> TextReader::getValues(const string& key) {




}



bool TextReader::search(const string& key) {



}


size_t TextReader::howManyfollowers(const string& key) {




}
