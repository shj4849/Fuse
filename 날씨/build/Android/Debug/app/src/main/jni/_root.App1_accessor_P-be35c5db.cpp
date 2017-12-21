// This file was generated based on C:/Users/t2/Documents/Fuse/App1/.uno/ux13/App1.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.App1_accessor_P-be35c5db.h>
#include <_root.PageWithTitle.h>
#include <Uno.Bool.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[2];

namespace g{

// internal sealed class App1_accessor_PageWithTitle_HeaderTextColor :20
// {
// static generated App1_accessor_PageWithTitle_HeaderTextColor() :20
static void App1_accessor_PageWithTitle_HeaderTextColor__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    App1_accessor_PageWithTitle_HeaderTextColor::Singleton_ = App1_accessor_PageWithTitle_HeaderTextColor::New1();
    App1_accessor_PageWithTitle_HeaderTextColor::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"HeaderTextC...*/]);
}

static void App1_accessor_PageWithTitle_HeaderTextColor_build(uType* type)
{
    ::STRINGS[0] = uString::Const("HeaderTextColor");
    ::TYPES[0] = ::g::PageWithTitle_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&App1_accessor_PageWithTitle_HeaderTextColor::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&App1_accessor_PageWithTitle_HeaderTextColor::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* App1_accessor_PageWithTitle_HeaderTextColor_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(App1_accessor_PageWithTitle_HeaderTextColor);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("App1_accessor_PageWithTitle_HeaderTextColor", options);
    type->fp_build_ = App1_accessor_PageWithTitle_HeaderTextColor_build;
    type->fp_ctor_ = (void*)App1_accessor_PageWithTitle_HeaderTextColor__New1_fn;
    type->fp_cctor_ = App1_accessor_PageWithTitle_HeaderTextColor__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))App1_accessor_PageWithTitle_HeaderTextColor__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))App1_accessor_PageWithTitle_HeaderTextColor__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))App1_accessor_PageWithTitle_HeaderTextColor__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))App1_accessor_PageWithTitle_HeaderTextColor__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))App1_accessor_PageWithTitle_HeaderTextColor__get_SupportsOriginSetter_fn;
    return type;
}

// public generated App1_accessor_PageWithTitle_HeaderTextColor() :20
void App1_accessor_PageWithTitle_HeaderTextColor__ctor_1_fn(App1_accessor_PageWithTitle_HeaderTextColor* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :26
void App1_accessor_PageWithTitle_HeaderTextColor__GetAsObject_fn(App1_accessor_PageWithTitle_HeaderTextColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uBox(::g::Uno::Float4_typeof(), uPtr(uCast< ::g::PageWithTitle*>(obj, ::TYPES[0/*PageWithTitle*/]))->HeaderTextColor()), void();
}

// public override sealed Uno.UX.Selector get_Name() :23
void App1_accessor_PageWithTitle_HeaderTextColor__get_Name_fn(App1_accessor_PageWithTitle_HeaderTextColor* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = App1_accessor_PageWithTitle_HeaderTextColor::_name_, void();
}

// public generated App1_accessor_PageWithTitle_HeaderTextColor New() :20
void App1_accessor_PageWithTitle_HeaderTextColor__New1_fn(App1_accessor_PageWithTitle_HeaderTextColor** __retval)
{
    *__retval = App1_accessor_PageWithTitle_HeaderTextColor::New1();
}

// public override sealed Uno.Type get_PropertyType() :25
void App1_accessor_PageWithTitle_HeaderTextColor__get_PropertyType_fn(App1_accessor_PageWithTitle_HeaderTextColor* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Float4_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :27
void App1_accessor_PageWithTitle_HeaderTextColor__SetAsObject_fn(App1_accessor_PageWithTitle_HeaderTextColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::PageWithTitle*>(obj, ::TYPES[0/*PageWithTitle*/]))->SetHeaderTextColor(uUnbox< ::g::Uno::Float4>(::g::Uno::Float4_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :28
void App1_accessor_PageWithTitle_HeaderTextColor__get_SupportsOriginSetter_fn(App1_accessor_PageWithTitle_HeaderTextColor* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> App1_accessor_PageWithTitle_HeaderTextColor::Singleton_;
::g::Uno::UX::Selector App1_accessor_PageWithTitle_HeaderTextColor::_name_;

// public generated App1_accessor_PageWithTitle_HeaderTextColor() [instance] :20
void App1_accessor_PageWithTitle_HeaderTextColor::ctor_1()
{
    ctor_();
}

// public generated App1_accessor_PageWithTitle_HeaderTextColor New() [static] :20
App1_accessor_PageWithTitle_HeaderTextColor* App1_accessor_PageWithTitle_HeaderTextColor::New1()
{
    App1_accessor_PageWithTitle_HeaderTextColor* obj1 = (App1_accessor_PageWithTitle_HeaderTextColor*)uNew(App1_accessor_PageWithTitle_HeaderTextColor_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
