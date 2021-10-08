#ifndef LEX_H
#define LEX_H
#include <iostream>
using namespace std;

class Lex
{

    public:

        Lex();
        virtual ~Lex();
        string   Analysis(string tok_input);
        void Clear();
    protected:

    private:
        string token;
};

#endif // LEX_H
