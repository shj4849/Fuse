// This file was generated based on C:/Users/t2/AppData/Local/Fusetools/Packages/UnoCore/1.4.3/Source/Uno/Content/Fonts/SdfFontShader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Content.Fonts.TextShader.h>
#include <Uno.Runtime.Implement-476e2792.h>
namespace g{namespace Uno{namespace Content{namespace Fonts{struct SdfFontShader;}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct TextShaderData;}}}}

namespace g{
namespace Uno{
namespace Content{
namespace Fonts{

// public sealed class SdfFontShader :23
// {
::g::Uno::Content::Fonts::TextShader_type* SdfFontShader_typeof();
void SdfFontShader__ctor_1_fn(SdfFontShader* __this);
void SdfFontShader__Draw_fn(SdfFontShader* __this, ::g::Uno::Content::Fonts::TextShaderData* data);
void SdfFontShader__init_DrawCalls_fn(SdfFontShader* __this);
void SdfFontShader__New1_fn(SdfFontShader** __retval);

struct SdfFontShader : ::g::Uno::Content::Fonts::TextShader
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_379fdedc;

    void ctor_1();
    void init_DrawCalls();
    static SdfFontShader* New1();
};
// }

}}}} // ::g::Uno::Content::Fonts
