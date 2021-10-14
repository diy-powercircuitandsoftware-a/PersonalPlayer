#ifndef FINDTOKEN_H
#define FINDTOKEN_H
#include <iostream>
using namespace std;

class FindToken
{
public:
    FindToken();
    virtual ~FindToken();
    void Analysis(string tok_input);
    bool Activate;
    bool Skip;
    bool Complete;
    bool IsDigi;
    string Text;
protected:

private:
};

#endif // FINDTOKEN_H
