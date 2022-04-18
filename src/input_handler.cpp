//
//  input_handler.cpp
//  turingbinary
//
//  Created by Andrew Kuhl on 4/18/22.
//
using namespace std;
#include "input_handler.hpp"
#include <bitset>
string InputHandler::getInput()
{
    string a;
    getline(cin, a);
    return a;
}
string InputHandler::strtobin(string a)
{
    string binaryString = "";
    for (char& _char : a) {
        binaryString +=bitset<8>(_char).to_string();
    }
    return binaryString;
}
