#ifndef LEX_H
#define LEX_H
#include <iostream>
#include <vector>
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
        std::vector<LexPositionNode> lexnode;
};

#endif // LEX_H
