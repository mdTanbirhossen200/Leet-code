#include <iostream>
#include <vector>
using namespace std;

bool checkPangram(string &s){
      for(char ch = 'a'; ch <= 'z'; ch++) {
        bool found = false;
        
        for(int i = 0; i < s.length(); i++) {
            if(ch == tolower(s[i])) {
                found = true;
                break;
            }
        }
      
        if(found == false)
            return false;
    }
    return true;
}

int main() {

    string s = "The quick brown fox jumps over the lazy dog";
    if (checkPangram(s) == true)
        cout << "true";  
    else
        cout << "false";  
    return 0;
}