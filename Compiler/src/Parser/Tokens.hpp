#ifndef TOKENS_H
#define TOKENS_H
#include <iostream>
#include <vector>;
using namespace std;
class Tokens
{
public:
    Tokens();
    virtual ~Tokens();
    vector<string> Brackets_Types= {"{","}","[","]","(",")"};
    vector<string> Keyword_Types= {"delete","redim","for","if","in","switch","else","do",
                                   "break","case","continue","default","while","const","enum","bool","byte","char",
                                   "double","float","int","long","short","string","ubyte","ufloat","uint","ulong",
                                   "ushort","var","catch","extends","finally","throw","throws","try","loadlib","oslib",
                                   "as","class","function","import","instanceof","new","private","public","return","super",
                                   "this","void","asynchronous","synchronized","false","null","true","main"
                                  };
    vector<string> Operator_Types= {"!","!=","&&","--","<","<=","=","==",">",">=","%","++","||"};
    vector<string> Special_Types= {":",",",";" };
    vector<string> Float_Types= {".","0","1","2","3","4","5","6","7","8","9" };
    bool IsBrackets(string s);
    bool IsOperator(string s);
    bool IsSpecial(string s);
    bool IsFloat(string s);
    bool IsKeyword(string s);


protected:

private:

};

#endif // TOKENS_H
