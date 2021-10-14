#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include <fstream>
#include <Lex.hpp>
#include <Tokens.hpp>
#include <string>

using namespace std;

/*


bool isNumber(char* str)							//check if the given substring is a number or not
{
    int i, len = strlen(str),numOfDecimal = 0;
    if (len == 0)
    {
        return false;
    }
    for (i = 0 ; i < len ; i++)
    {
        if (numOfDecimal > 1 && str[i] == '.')
        {
            return false;
        } else if (numOfDecimal <= 1)
        {
            numOfDecimal++;
        }
        if (str[i] != '0' && str[i] != '1' && str[i] != '2'
            && str[i] != '3' && str[i] != '4' && str[i] != '5'
            && str[i] != '6' && str[i] != '7' && str[i] != '8'
            && str[i] != '9' || (str[i] == '-' && i > 0))
            {
                return false;
            }
    }
    return true;
}

char* subString(char* realStr, int l, int r)				//extract the required substring from the main string
{

}


void parse(char* str)						//parse the expression
{
    int left = 0, right = 0;
    int len = strlen(str);
    while (right <= len && left <= right) {
        if (isPunctuator(str[right]) == false)			//if character is a digit or an alphabet
            {
                right++;
            }

        if (isPunctuator(str[right]) == true && left == right)		//if character is a punctuator
            {
            if (isOperator(str[right]) == true)
            {
                std::cout<< str[right] <<" IS AN OPERATOR\n";
            }
            right++;
            left = right;
            } else if (isPunctuator(str[right]) == true && left != right
                   || (right == len && left != right)) 			//check if parsed substring is a keyword or identifier or number
            {
            char* sub = subString(str, left, right - 1);   //extract substring

            if (isKeyword(sub) == true)
                        {
                            cout<< sub <<" IS A KEYWORD\n";
                        }
            else if (isNumber(sub) == true)
                        {
                            cout<< sub <<" IS A NUMBER\n";
                        }
            else if (validIdentifier(sub) == true
                     && isPunctuator(str[right - 1]) == false)
                     {
                         cout<< sub <<" IS A VALID IDENTIFIER\n";
                     }
            else if (validIdentifier(sub) == false
                     && isPunctuator(str[right - 1]) == false)
                     {
                         cout<< sub <<" IS NOT A VALID IDENTIFIER\n";
                     }

            left = right;
            }
    }
    return;
}
*/

int main(int argc, char **argv) {
    std::ifstream file("D:\\dev\\diy\\PersonalPlayer\\Exsimple\\Code\\basic.ppcode");
    string token="";
if (file.is_open()) {
    std::string line;
    while (std::getline(file, line)) {
         token=token+"\n"+line.c_str();
    }
    file.close();
}

  Lex myObj;
 myObj.Analysis(token);


  return 0;
}
