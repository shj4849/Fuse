// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Content.Models.Ps-6b510515.h>

namespace g{
namespace Uno{
namespace Content{
namespace Models{

// C:\Users\t2\AppData\Local\Fusetools\Packages\UnoCore\1.4.3\Source\Uno\Content\Models\ModelReader.uno
// ----------------------------------------------------------------------------------------------------

// internal sealed class PsgReaderInternal :10
// {
static void PsgReaderInternal_build(uType* type)
{
}

uType* PsgReaderInternal_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(PsgReaderInternal);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Content.Models.PsgReaderInternal", options);
    type->fp_build_ = PsgReaderInternal_build;
    return type;
}
// }

}}}} // ::g::Uno::Content::Models
