#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
string read;
    int cumulator = 0;
    int difference = 23;
    while (getline(cin, read)) {
        size_t first_position  = read.find(' ', 0);
        string first_section  = read.substr(0, first_position)
            , decision = read.substr(first_position+1);
            
        // Part 2
        string second_section;
        if(decision.compare("X") == 0) {
            // lose
            if(first_section.compare("A") == 0) second_section = "Z";
            if(first_section.compare("B") == 0) second_section = "X";
            if(first_section.compare("C") == 0) second_section = "Y";
        }
        if(decision.compare("Y") == 0) {
            // draw
            if(first_section.compare("A") == 0) second_section = "X";
            if(first_section.compare("B") == 0) second_section = "Y";
            if(first_section.compare("C") == 0) second_section = "Z";
        }
        if(decision.compare("Z") == 0) {
            // win
            if(first_section.compare("A") == 0) second_section = "Y";
            if(first_section.compare("B") == 0) second_section = "Z";
            if(first_section.compare("C") == 0) second_section = "X";
        }
        // End of Part 2    
            
        int diff = (int)second_section[0] - (int)first_section[0];
        
        if(second_section.compare("X") == 0) cumulator += 1;
        if(second_section.compare("Y") == 0) cumulator += 2;
        if(second_section.compare("Z") == 0) cumulator += 3;
        
        if(diff - difference == 0) {
            cumulator += 3;
        }
        if(diff - difference == 1 || diff - difference == -2) {
            cumulator += 6;
        }
    }
    
    cout << "cumulator is " << cumulator << endl;
    return 0; 
}
