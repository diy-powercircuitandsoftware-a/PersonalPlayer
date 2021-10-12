#ifndef LEX_H
#define LEX_H
#include <iostream>
#include <vector>
#include<Tokens.h>
using namespace std;
struct LexPositionNode {
  int posstart;
  int posend;
  string value;
  string tokentype;

};
class Lex
{
    public:
        Lex();
        virtual ~Lex();
        std::vector<LexPositionNode> Analysis(string tok_input);
        void Clear();
    protected:

    private:
        Tokens tokenclass;
        std::vector<LexPositionNode> lexnode;
       // string ReadNext(string s,)

};

#endif // LEX_H
