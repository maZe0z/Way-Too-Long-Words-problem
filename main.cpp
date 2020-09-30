#include <iostream>
#include <string>
using namespace std;

int main() {
    int str,n,i;
    string word;
    cin >> n;
    for (i=1;i<=n;i++){
        cin >> word;
        str=word.length()-2;
        if (word.length()<=10){
            cout << word << endl;
        }
        else{
            cout << word.front() << str << word.back() << endl;
        }
    }
    return 0;
}
