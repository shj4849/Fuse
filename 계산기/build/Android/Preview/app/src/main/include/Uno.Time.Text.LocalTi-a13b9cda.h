// This file was generated based on C:/Users/t2/AppData/Local/Fusetools/Packages/UnoCore/1.4.3/Source/Uno/Time/Text/LocalTimePattern.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{namespace Text{struct LocalTimePattern__LocalTimeBucket;}}}}

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// private sealed class LocalTimePattern.LocalTimeBucket :103
// {
uType* LocalTimePattern__LocalTimeBucket_typeof();
void LocalTimePattern__LocalTimeBucket__ctor__fn(LocalTimePattern__LocalTimeBucket* __this);
void LocalTimePattern__LocalTimeBucket__New1_fn(LocalTimePattern__LocalTimeBucket** __retval);

struct LocalTimePattern__LocalTimeBucket : uObject
{
    int Hour;
    int Minute;
    int Second;
    int Millisecond;

    void ctor_();
    static LocalTimePattern__LocalTimeBucket* New1();
};
// }

}}}} // ::g::Uno::Time::Text
