#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <cstring>

using namespace std;

int main()
{
string read;
    map<char, int> container;
    int cumulator = 0;
    while (getline(cin, read)) {
        container.clear();
        for (string::iterator it = read.begin(); it != read.end(); it++) {
           if(it - read.begin() <= (read.end() - read.begin() - 1)  / 2) {
               container[*it] = 1;
           } else {
               if(container[*it] == 1) {
                    container[*it] += 1;
                    break;
               }
           }
        }
        for (auto it = container.begin(); it != container.end(); ++it)
            if (it->second > 1) {
                if(islower(it->first)) {
                    cumulator += (int)it->first - 96;
                } else {
                    cumulator += (int)it->first - 64 + 26;
                }
            }
    }
    
    cout << "cumulator is " << cumulator << endl;
    return 0; 
}
