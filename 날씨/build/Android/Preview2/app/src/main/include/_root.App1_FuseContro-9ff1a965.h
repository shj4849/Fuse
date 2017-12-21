// This file was generated based on C:/Users/t2/Documents/Fuse/App1/build/Android/Preview2/cache/ux13/App1.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct App1_FuseControlsPanel_Color_Property;}

namespace g{

// internal sealed class App1_FuseControlsPanel_Color_Property :40
// {
::g::Uno::UX::Property1_type* App1_FuseControlsPanel_Color_Property_typeof();
void App1_FuseControlsPanel_Color_Property__ctor_3_fn(App1_FuseControlsPanel_Color_Property* __this, ::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector* name);
void App1_FuseControlsPanel_Color_Property__Get1_fn(App1_FuseControlsPanel_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval);
void App1_FuseControlsPanel_Color_Property__New1_fn(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector* name, App1_FuseControlsPanel_Color_Property** __retval);
void App1_FuseControlsPanel_Color_Property__get_Object_fn(App1_FuseControlsPanel_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void App1_FuseControlsPanel_Color_Property__Set1_fn(App1_FuseControlsPanel_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin);
void App1_FuseControlsPanel_Color_Property__get_SupportsOriginSetter_fn(App1_FuseControlsPanel_Color_Property* __this, bool* __retval);

struct App1_FuseControlsPanel_Color_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Panel*> _obj;

    void ctor_3(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector name);
    static App1_FuseControlsPanel_Color_Property* New1(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
