#include "FindComment.h"

FindComment::FindComment()
{
    this->activate=false;
    this->skipcount=0;

}

FindComment::~FindComment()
{
    //dtor
}

void FindComment::Analysis(string tok_input)
{

    if (tok_input=="/*" &&  this->activate==false)
    {
        this->activate=true;
    }
    else  if (tok_input=="*/"&&this->activate)
    {
        this->activate=false;
        this->skipcount=2;
    }
    if (this->activate)
    {
        this->skipcount=1;
    }
}
bool  FindComment::Skip()
{
    if ( this->skipcount==0)
    {
        return false;
    }
    skipcount--;
    return true;
}
