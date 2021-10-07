#include "Tokens.h"

Tokens::Tokens()
{
    //ctor
}

Tokens::~Tokens()
{
    //dtor
}
enum Tokens_Type
{
  TT_constant,TT_identifier, TT_keyword,TT_operators,TT_special,TT_string
};
enum Keyword_Type
{

   KT_bool,KT_break,KT_byte,KT_case,KT_catch,KT_char,KT_class,KT_const,KT_continue,KT_default, KT_delete,
    KT_do, KT_double, KT_else, KT_enum, KT_extends, KT_finally, KT_float, KT_for, KT_if, KT_import, KT_instanceof,
    KT_int,KT_long,KT_native,KT_new,KT_private,KT_public,KT_return,KT_short,KT_string,KT_super,KT_switch,KT_synchronized,
    KT_this,KT_throw,KT_throws,KT_try,KT_ubyte,KT_ufloat,KT_uint,KT_ulong,KT_ushort,KT_var,KT_while,KT_void
};
enum Literal_Type
{
   LT_false ,LT_null, LT_true
};

/*
$identifier
constructor=> pubkuc classname
 destructor =>pubkuc !classname
*/
