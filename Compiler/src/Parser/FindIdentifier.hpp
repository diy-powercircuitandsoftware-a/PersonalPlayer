#ifndef FINDIDENTIFIER_H
#define FINDIDENTIFIER_H
#include <iostream>
using namespace std;

class FindIdentifier
{
public:
    FindIdentifier();
    virtual ~FindIdentifier();
    void Analysis(string tok_input);
    void Clear();
    bool Activate;
    bool Skip;
    bool Complete;
    string Text;
protected:

private:
};

#endif // FINDIDENTIFIER_H
