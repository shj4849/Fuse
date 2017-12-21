// This file was generated based on C:/Users/t2/Documents/Fuse/App1/build/Android/Preview1/cache/ux13/App1.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct App1_accessor_PageWithTitle_Instructions;}

namespace g{

// internal sealed class App1_accessor_PageWithTitle_Instructions :30
// {
::g::Uno::UX::PropertyAccessor_type* App1_accessor_PageWithTitle_Instructions_typeof();
void App1_accessor_PageWithTitle_Instructions__ctor_1_fn(App1_accessor_PageWithTitle_Instructions* __this);
void App1_accessor_PageWithTitle_Instructions__GetAsObject_fn(App1_accessor_PageWithTitle_Instructions* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void App1_accessor_PageWithTitle_Instructions__get_Name_fn(App1_accessor_PageWithTitle_Instructions* __this, ::g::Uno::UX::Selector* __retval);
void App1_accessor_PageWithTitle_Instructions__New1_fn(App1_accessor_PageWithTitle_Instructions** __retval);
void App1_accessor_PageWithTitle_Instructions__get_PropertyType_fn(App1_accessor_PageWithTitle_Instructions* __this, uType** __retval);
void App1_accessor_PageWithTitle_Instructions__SetAsObject_fn(App1_accessor_PageWithTitle_Instructions* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void App1_accessor_PageWithTitle_Instructions__get_SupportsOriginSetter_fn(App1_accessor_PageWithTitle_Instructions* __this, bool* __retval);

struct App1_accessor_PageWithTitle_Instructions : ::g::Uno::UX::PropertyAccessor
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return Singleton_; }
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return _name_; }

    void ctor_1();
    static App1_accessor_PageWithTitle_Instructions* New1();
};
// }

} // ::g
