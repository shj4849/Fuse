// This file was generated based on C:/Users/t2/Documents/Fuse/App1/App1.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.App1_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[2];

namespace g{

// public static generated class App1_bundle :0
// {
// static App1_bundle() :0
static void App1_bundle__cctor__fn(uType* __type)
{
    App1_bundle::FuseLogo7c6dbe9c_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"App1"*/]))->GetFile(::STRINGS[1/*"fuselogo-f8...*/]);
}

static void App1_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("App1");
    ::STRINGS[1] = uString::Const("fuselogo-f8f933ae.png");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&App1_bundle::FuseLogo7c6dbe9c_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("FuseLogo7c6dbe9c", 0));
}

uClassType* App1_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("App1_bundle", options);
    type->fp_build_ = App1_bundle_build;
    type->fp_cctor_ = App1_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> App1_bundle::FuseLogo7c6dbe9c_;
// }

} // ::g
