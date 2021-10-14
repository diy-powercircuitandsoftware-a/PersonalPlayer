#include "FindToken.hpp"

FindToken::FindToken()
{
    this->Complete=false;
    this->Activate==false;
    this->Skip=false;
}

FindToken::~FindToken()
{
    //dtor
}
void FindToken::Analysis(string tok_input)
{

    if (isalnum(tok_input.at(0)) && this->Activate==false)
    {
        this->Text="";
        this->Complete=false;
        this->Activate=true;
        this->Skip=true;

    }
    else  if (!isalnum(tok_input.at(0))&&this->Activate)
    {
        this->Skip=false;
        this->Activate=false;
        this->Complete=true;


    }
    if (this->Activate)
    {
        this->Text= this->Text+tok_input;

    }

}
