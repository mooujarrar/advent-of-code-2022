#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string read;
    vector<int> vect;
    int cumulator = 0;
    int max = 0;
    while (getline(cin, read)) {
        if(read != "") {
            cumulator += stoi(read);
        } else {
            if (max < cumulator) max = cumulator;
            vect.push_back(cumulator);
            cumulator = 0;
        }
        
    }
    sort(vect.begin(), vect.end());
    cout << "The elf with the maximum supply carries " << max << endl;
    cout << "The top 3 elves carrying the max supply are carrying " << vect[vect.size() - 1] + vect[vect.size() - 2] + vect[vect.size() - 3] << endl;
    return 0;
}
