#include "Tokens.hpp"

Tokens::Tokens()
{
    //ctor
}

Tokens::~Tokens()
{
    //dtor
}

bool Tokens::IsBrackets(string s)
{
    return (std::count(this->Brackets_Types.begin(), this->Brackets_Types.end(), s));
}
bool Tokens::IsFloat(string s)
{
    int dotcount=0;
    for (unsigned i=0; i<s.length(); ++i)
    {
        string ssubstring=s.substr(i,1);
        if (ssubstring==".")
        {
            dotcount++;
        }
        if (dotcount>1){
            return false;
        }

        if (!(std::count(this->Float_Types.begin(), this->Float_Types.end(),ssubstring )))
        {
            return false;
        }

    }
    if (s.length()==0)
    {
        return false;
    }

    return true;
}
bool Tokens::IsKeyword(string s)
{
    return (std::count(this->Keyword_Types.begin(), this->Keyword_Types.end(), s));
}
bool Tokens::IsOperator(string s)
{
    return (std::count(this->Operator_Types.begin(), this->Operator_Types.end(), s));
}
bool Tokens::IsSpecial(string s)
{
    return (std::count(this->Special_Types.begin(), this->Special_Types.end(), s));
}



/*
$identifier
constructor=> pubkuc classname
 destructor =>pubkuc !classname
*/
