// This file was generated based on C:/Users/t2/AppData/Local/Fusetools/Packages/UnoCore/1.4.3/Source/Uno/Content/Fonts/BitmapFont.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Content{namespace Fonts{struct BitmapFont__CharPair;}}}}

namespace g{
namespace Uno{
namespace Content{
namespace Fonts{

// public struct BitmapFont.CharPair :18
// {
uStructType* BitmapFont__CharPair_typeof();
void BitmapFont__CharPair__ctor__fn(BitmapFont__CharPair* __this, uChar* left, uChar* right);
void BitmapFont__CharPair__GetHashCode_fn(BitmapFont__CharPair* __this, uType* __type, int* __retval);
void BitmapFont__CharPair__New1_fn(uChar* left, uChar* right, BitmapFont__CharPair* __retval);

struct BitmapFont__CharPair
{
    uChar Left;
    uChar Right;

    void ctor_(uChar left, uChar right);
    int GetHashCode(uType* __type) { int __retval; return BitmapFont__CharPair__GetHashCode_fn(this, __type, &__retval), __retval; }
};

BitmapFont__CharPair BitmapFont__CharPair__New1(uChar left, uChar right);
// }

}}}} // ::g::Uno::Content::Fonts
