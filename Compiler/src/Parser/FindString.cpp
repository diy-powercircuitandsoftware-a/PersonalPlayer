#include "FindString.h"

FindString::FindString()
{
    this->Complete=false;
    this->Activate==false;
    this->Skip=false;
}

FindString::~FindString()
{
    //dtor
}
void FindString::Analysis(string tok_input)
{

    if (tok_input=="\"" &&    this->Activate==false)
    {
        this->Text="";
        this->Complete=false;
        this->Activate=true;
        this->Skip=true;
        return;
    }
    else  if (tok_input=="\""&&this->Activate)
    {
        this->Activate=false;
        this->Skip=true;
        this->Complete=true;
        this->Skip=true;
        return;
    }
    if (this->Activate)
    {
        this->Text= this->Text+tok_input;
    }
    else{
        this->Skip=false;
    }
}
