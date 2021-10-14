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
    std::ifstream file("D:\\dev\\diy\\PersonalPlayer\\Exsimple\\Code\\test.ppcode");
    string token="";
    if (file.is_open())
    {
        std::string line;
        while (std::getline(file, line))
        {
            token=token+"\n"+line.c_str();
        }
        file.close();
    }

    Lex myObj;
    myObj.Analysis(token);


    return 0;
}
