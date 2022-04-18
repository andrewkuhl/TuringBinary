//
//  main.cpp
//  turingbinary
//
//  Created by Andrew Kuhl on 4/18/22.
//

#include  <iostream>
#include "input_handler.hpp"
using namespace std;
int main()
{
    InputHandler in;
    string input;
    while(input != "$")
    {
        input = in.getInput();
        cout << in.strtobin(input) << endl;
    }
    return 0;
}
