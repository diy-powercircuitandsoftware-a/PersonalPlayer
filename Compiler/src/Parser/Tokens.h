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
          vector<string> Brackets_Types={"{","}","[","]","(",")"};
          vector<string> Keyword_Array_Types={"delete","redim"};
          vector<string> Keyword_Conditional_Types={"for","if","in","switch","else","do","break","case","continue","default","while"};
          vector<string> Keyword_const_Types={"const","enum"};
          vector<string> Keyword_Data_Types={"bool","byte","char","double","float","int","long","short","string","ubyte","ufloat","uint","ulong","ushort","var"};
          vector<string> Keyword_Error_Types={"catch","extends","finally","throw","throws","try"};
          vector<string> Keyword_Import_Types={"loadlib","oslib"};
          vector<string> Keyword_OOP_Types={"as","class","function","import","instanceof","new","private","public","return","super","this","void"};
          vector<string> Keyword_Thread_Types={"asynchronous","synchronized"};
          vector<string> Literal_Types={"false","null","true"};
          vector<string> Operator_Types={"!","!=","&&","--","<","<=","=","==",">",">=","%","++","||"};
         // vector<string> Token_Types={"constant","identifier"," keyword", ","operators"," ","special", };
            bool IsBrackets(string s);
            bool IsOperator(string s);



    protected:

    private:

};

#endif // TOKENS_H
