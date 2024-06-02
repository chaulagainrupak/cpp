#include <iostream>
#include <string>

using namespace std;

int main(){
    string word;
    string finalWord;

    cout << "Enter the word that you want to reverse:";
    cin >> word;

    cout << "First letter of the word:" << word[0] << endl;
    // really stupid way of doing this 
    for(int i = 0; i <  word.length()+1; i++){
        cout << word[word.length()-i] << endl;

        finalWord += word[word.length()-i];
    }
    // cout << "The reversed word is:" << finalWord << endl;
    // may be a better way?

    for(int i = word.length(); i+1 > 0; i--){
        cout << word[i] << endl;

        finalWord += word[i];
    }
    cout << "The reversed word is:" << finalWord << endl;
    return 0;
}