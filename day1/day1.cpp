#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main() {
    ifstream file; 
    file.open("input.txt");
    if (file.is_open()) {
        string line;
        int sum = 0;
        while (getline(file, line)) {
            int firstNum = NULL, lastNum = NULL;
            for(char c : line) {
                if(isdigit(c)) {
                    if(!firstNum) {
                        firstNum = (int)(c - '0');
                    }
                    lastNum = (int)(c - '0');
                }
            }
            sum += firstNum * 10 + lastNum;
        }
        cout << sum << endl;
        file.close();
    }
}