// This file was generated based on C:/Users/t2/AppData/Local/Fusetools/Packages/Uno.Testing/1.4.3/Assert.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Testing{struct Assert;}}}

namespace g{
namespace Uno{
namespace Testing{

// public partial static class Assert :8
// {
uClassType* Assert_typeof();
void Assert__Fail_fn(uString* message, uString* filePath, int* lineNumber, uString* memberName);
void Assert__ReportFailure_fn(uString* filePath, int* lineNumber, uString* memberName, uString* expected, uString* actual);

struct Assert : uObject
{
    static int maxStringLength_;
    static int& maxStringLength() { return maxStringLength_; }

    static void Fail(uString* message, uString* filePath, int lineNumber, uString* memberName);
    static void ReportFailure(uString* filePath, int lineNumber, uString* memberName, uString* expected, uString* actual);
};
// }

}}} // ::g::Uno::Testing
