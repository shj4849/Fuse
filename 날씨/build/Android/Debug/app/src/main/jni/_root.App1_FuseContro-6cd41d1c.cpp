// This file was generated based on C:/Users/t2/Documents/Fuse/App1/.uno/ux13/App1.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.App1_FuseContro-6cd41d1c.h>
#include <Fuse.Controls.Rectangle.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class App1_FuseControlsRectangle_CornerRadius_Property :75
// {
static void App1_FuseControlsRectangle_CornerRadius_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::Rectangle_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.Rectangle*/], offsetof(App1_FuseControlsRectangle_CornerRadius_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* App1_FuseControlsRectangle_CornerRadius_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(App1_FuseControlsRectangle_CornerRadius_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("App1_FuseControlsRectangle_CornerRadius_Property", options);
    type->fp_build_ = App1_FuseControlsRectangle_CornerRadius_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))App1_FuseControlsRectangle_CornerRadius_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))App1_FuseControlsRectangle_CornerRadius_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))App1_FuseControlsRectangle_CornerRadius_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))App1_FuseControlsRectangle_CornerRadius_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public App1_FuseControlsRectangle_CornerRadius_Property(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) :78
void App1_FuseControlsRectangle_CornerRadius_Property__ctor_3_fn(App1_FuseControlsRectangle_CornerRadius_Property* __this, ::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :80
void App1_FuseControlsRectangle_CornerRadius_Property__Get1_fn(App1_FuseControlsRectangle_CornerRadius_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Rectangle*>(obj, ::TYPES[0/*Fuse.Controls.Rectangle*/]))->CornerRadius(), void();
}

// public App1_FuseControlsRectangle_CornerRadius_Property New(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) :78
void App1_FuseControlsRectangle_CornerRadius_Property__New1_fn(::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector* name, App1_FuseControlsRectangle_CornerRadius_Property** __retval)
{
    *__retval = App1_FuseControlsRectangle_CornerRadius_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :79
void App1_FuseControlsRectangle_CornerRadius_Property__get_Object_fn(App1_FuseControlsRectangle_CornerRadius_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :81
void App1_FuseControlsRectangle_CornerRadius_Property__Set1_fn(App1_FuseControlsRectangle_CornerRadius_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::Rectangle*>(obj, ::TYPES[0/*Fuse.Controls.Rectangle*/]))->SetCornerRadius(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :82
void App1_FuseControlsRectangle_CornerRadius_Property__get_SupportsOriginSetter_fn(App1_FuseControlsRectangle_CornerRadius_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public App1_FuseControlsRectangle_CornerRadius_Property(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) [instance] :78
void App1_FuseControlsRectangle_CornerRadius_Property::ctor_3(::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public App1_FuseControlsRectangle_CornerRadius_Property New(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) [static] :78
App1_FuseControlsRectangle_CornerRadius_Property* App1_FuseControlsRectangle_CornerRadius_Property::New1(::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector name)
{
    App1_FuseControlsRectangle_CornerRadius_Property* obj1 = (App1_FuseControlsRectangle_CornerRadius_Property*)uNew(App1_FuseControlsRectangle_CornerRadius_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
