#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector <string> dicWords;

    for(string word; cin>>word;)
        dicWords.push_back(word);
    cout << "Number of words: " << dicWords.size() << '\n';


    sort(dicWords.begin(), dicWords.end());
    for(string x: dicWords)
        cout<<x;


    for(int i =0; i < dicWords.size(); ++i)
        if (i == 0 || dicWords[i - 1] != dicWords[i])
            cout << dicWords[i] << endl;



}