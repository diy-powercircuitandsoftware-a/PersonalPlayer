#ifndef FINDSTRING_H
#define FINDSTRING_H
#include <iostream>
using namespace std;

class FindString
{
public:
    FindString();
    virtual ~FindString();
    void Analysis(string tok_input);
    bool Activate;
    bool Skip;
    bool Complete;
    string Text;
protected:

private:


};

#endif // FINDSTRING_H
