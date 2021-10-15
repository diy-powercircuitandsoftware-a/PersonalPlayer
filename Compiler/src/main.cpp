#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include <fstream>
#include <Lex.hpp>
#include <Tokens.hpp>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    std::ifstream file("D:\\dev\\diy\\PersonalPlayer\\Exsimple\\Code\\basic.ppcode");
    vector<string> v;
    if (file.is_open())
    {
        std::string line;
        while (std::getline(file, line))
        {
            v.push_back(line.c_str());
        }
        file.close();
    }

    Lex myObj;
    myObj.Analysis(v);


    return 0;
}
