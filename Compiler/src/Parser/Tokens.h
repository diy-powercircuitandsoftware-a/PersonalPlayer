#ifndef TOKENS_H
#define TOKENS_H
#include <iostream>
using namespace std;
class Tokens
{
    public:
        Tokens();
        virtual ~Tokens();
         string Keyword_Array_Types[2]={"delete","redim"};
         string Keyword_Conditional_Types[11]={"for","if","in","switch","else","do","break","case","continue","default","while"};
         string Keyword_const_Types[2]={"const","enum"};
         string Keyword_Data_Types[15]={"bool","byte","char","double","float","int","long","short","string","ubyte","ufloat","uint","ulong","ushort","var"};
         string Keyword_Error_Types[6]={"catch","extends","finally","throw","throws","try"};
         string Keyword_Import_Types[2]={"loadlib","oslib"};
         string Keyword_OOP_Types[18]={"abstract","as","class","final","function","implements","import","instanceof","interface","new","private","protected","public","return","static","super","this","void"};
         string Keyword_Thread_Types[2]={"asynchronous","synchronized"};
         string Literal_Types[3]={"false","null","true"};
         string Operator_Types[13]={"!","!=","&&","--","<","<=","=","==",">",">=","%","++","||"};

         string Token_Types[10]={"constant","identifier"," keyword","leftbrace","leftparenthesis","operators","rightbrace","rightparenthesis","special","string"};
//Brackets


    protected:

    private:
};

#endif // TOKENS_H
