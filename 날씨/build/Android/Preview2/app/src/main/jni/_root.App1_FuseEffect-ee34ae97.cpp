// This file was generated based on C:/Users/t2/Documents/Fuse/App1/build/Android/Preview2/cache/ux13/App1.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.App1_FuseEffect-ee34ae97.h>
#include <Fuse.Effects.Blur.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class App1_FuseEffectsBlur_Radius_Property :109
// {
static void App1_FuseEffectsBlur_Radius_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Effects::Blur_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Effects.Blur*/], offsetof(App1_FuseEffectsBlur_Radius_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* App1_FuseEffectsBlur_Radius_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(App1_FuseEffectsBlur_Radius_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("App1_FuseEffectsBlur_Radius_Property", options);
    type->fp_build_ = App1_FuseEffectsBlur_Radius_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))App1_FuseEffectsBlur_Radius_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))App1_FuseEffectsBlur_Radius_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))App1_FuseEffectsBlur_Radius_Property__Set1_fn;
    return type;
}

// public App1_FuseEffectsBlur_Radius_Property(Fuse.Effects.Blur obj, Uno.UX.Selector name) :112
void App1_FuseEffectsBlur_Radius_Property__ctor_3_fn(App1_FuseEffectsBlur_Radius_Property* __this, ::g::Fuse::Effects::Blur* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :114
void App1_FuseEffectsBlur_Radius_Property__Get1_fn(App1_FuseEffectsBlur_Radius_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    uStackFrame __("App1_FuseEffectsBlur_Radius_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Effects::Blur*>(obj, ::TYPES[0/*Fuse.Effects.Blur*/]))->Radius(), void();
}

// public App1_FuseEffectsBlur_Radius_Property New(Fuse.Effects.Blur obj, Uno.UX.Selector name) :112
void App1_FuseEffectsBlur_Radius_Property__New1_fn(::g::Fuse::Effects::Blur* obj, ::g::Uno::UX::Selector* name, App1_FuseEffectsBlur_Radius_Property** __retval)
{
    *__retval = App1_FuseEffectsBlur_Radius_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :113
void App1_FuseEffectsBlur_Radius_Property__get_Object_fn(App1_FuseEffectsBlur_Radius_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :115
void App1_FuseEffectsBlur_Radius_Property__Set1_fn(App1_FuseEffectsBlur_Radius_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    uStackFrame __("App1_FuseEffectsBlur_Radius_Property", "Set(Uno.UX.PropertyObject,float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Effects::Blur*>(obj, ::TYPES[0/*Fuse.Effects.Blur*/]))->Radius(v_);
}

// public App1_FuseEffectsBlur_Radius_Property(Fuse.Effects.Blur obj, Uno.UX.Selector name) [instance] :112
void App1_FuseEffectsBlur_Radius_Property::ctor_3(::g::Fuse::Effects::Blur* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public App1_FuseEffectsBlur_Radius_Property New(Fuse.Effects.Blur obj, Uno.UX.Selector name) [static] :112
App1_FuseEffectsBlur_Radius_Property* App1_FuseEffectsBlur_Radius_Property::New1(::g::Fuse::Effects::Blur* obj, ::g::Uno::UX::Selector name)
{
    App1_FuseEffectsBlur_Radius_Property* obj1 = (App1_FuseEffectsBlur_Radius_Property*)uNew(App1_FuseEffectsBlur_Radius_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
