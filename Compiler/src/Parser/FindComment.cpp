#include "FindComment.hpp"

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

string FindComment::InsertLineComment(string s)
{
    s.erase(0, s.find_first_not_of(" \t\n\r\f\v"));

    if (s.substr(0,2)=="//")
    {
        return "";
    }
    s=s+"   ";
    bool isstring=false;
    for (unsigned i=0; i<s.length()-1; ++i)
    {
        if ((s.substr(i,1)=="\""||s.substr(i,1)=="'")&&isstring==false)
        {
            isstring=true;
        }
        else if ((s.substr(i,1)=="\""||s.substr(i,1)=="'")&&isstring==true)
        {
            isstring=false;
        }
        if (!isstring)
        {
            if (s.substr(i,2)=="//")
            {
                return s.substr(0,i-1);
            }
        }

    }
    return s;
}
