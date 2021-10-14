#include "FindIdentifier.hpp"

FindIdentifier::FindIdentifier()
{
    this->Complete=false;
    this->Activate==false;
    this->Skip=false;
}

FindIdentifier::~FindIdentifier()
{
    //dtor
}
void FindIdentifier::Analysis(string tok_input)
{

    if (tok_input=="$" &&  this->Activate==false)
    {
        this->Text="";
        this->Complete=false;
        this->Activate=true;
        this->Skip=true;
        return;
    }
    else  if (tok_input!="_"&&isalnum(tok_input.at(0))==false&&this->Activate)
    {
        this->Activate=false;
        this->Complete=true;
        this->Skip=false;
        return;
    }
    if (this->Activate)
    {
        this->Text= this->Text+tok_input;
    }

}
void FindIdentifier::Clear()
{
    this->Text="";
    this->Complete=false;
}
