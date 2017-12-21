// This file was generated based on C:/Users/t2/Documents/Fuse/App1/.uno/ux13/App1.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Effects{struct Blur;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct App1_FuseEffectsBlur_Radius_Property;}

namespace g{

// internal sealed class App1_FuseEffectsBlur_Radius_Property :109
// {
::g::Uno::UX::Property1_type* App1_FuseEffectsBlur_Radius_Property_typeof();
void App1_FuseEffectsBlur_Radius_Property__ctor_3_fn(App1_FuseEffectsBlur_Radius_Property* __this, ::g::Fuse::Effects::Blur* obj, ::g::Uno::UX::Selector* name);
void App1_FuseEffectsBlur_Radius_Property__Get1_fn(App1_FuseEffectsBlur_Radius_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval);
void App1_FuseEffectsBlur_Radius_Property__New1_fn(::g::Fuse::Effects::Blur* obj, ::g::Uno::UX::Selector* name, App1_FuseEffectsBlur_Radius_Property** __retval);
void App1_FuseEffectsBlur_Radius_Property__get_Object_fn(App1_FuseEffectsBlur_Radius_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void App1_FuseEffectsBlur_Radius_Property__Set1_fn(App1_FuseEffectsBlur_Radius_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin);

struct App1_FuseEffectsBlur_Radius_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Effects::Blur*> _obj;

    void ctor_3(::g::Fuse::Effects::Blur* obj, ::g::Uno::UX::Selector name);
    static App1_FuseEffectsBlur_Radius_Property* New1(::g::Fuse::Effects::Blur* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
