#ifndef LEXPOSITION_H
#define LEXPOSITION_H
#include <iostream>
using namespace std;
struct LexPositionNode {
  int strpos;
  int strposend;
  string value;
  string tokentype;
  struct LexPositionNode *next;
};
class LexPosition
{
    public:
        LexPosition();
        virtual ~LexPosition();

    protected:

    private:
        LexPositionNode linklistnode;
};

#endif // LEXPOSITION_H
