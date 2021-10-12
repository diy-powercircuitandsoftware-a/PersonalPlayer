#ifndef FINDCOMMENT_H
#define FINDCOMMENT_H
#include <iostream>
using namespace std;

class FindComment
{
    public:
        FindComment();
        virtual ~FindComment();
        void Analysis(string tok_input);
        bool Skip();
    protected:

    private:
        bool activate;
        unsigned int skipcount;

};

#endif // FINDCOMMENT_H
