// This file was generated based on C:/Users/t2/Documents/Fuse/App1/.uno/ux13/App1.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.App1_accessor_F-31feb0ff.h>
#include <Fuse.Controls.Page.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{

// internal sealed class App1_accessor_Fuse_Controls_Page_Title :11
// {
// static generated App1_accessor_Fuse_Controls_Page_Title() :11
static void App1_accessor_Fuse_Controls_Page_Title__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    App1_accessor_Fuse_Controls_Page_Title::Singleton_ = App1_accessor_Fuse_Controls_Page_Title::New1();
    App1_accessor_Fuse_Controls_Page_Title::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Title"*/]);
}

static void App1_accessor_Fuse_Controls_Page_Title_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Title");
    ::TYPES[0] = ::g::Fuse::Controls::Page_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&App1_accessor_Fuse_Controls_Page_Title::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&App1_accessor_Fuse_Controls_Page_Title::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* App1_accessor_Fuse_Controls_Page_Title_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(App1_accessor_Fuse_Controls_Page_Title);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("App1_accessor_Fuse_Controls_Page_Title", options);
    type->fp_build_ = App1_accessor_Fuse_Controls_Page_Title_build;
    type->fp_ctor_ = (void*)App1_accessor_Fuse_Controls_Page_Title__New1_fn;
    type->fp_cctor_ = App1_accessor_Fuse_Controls_Page_Title__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))App1_accessor_Fuse_Controls_Page_Title__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))App1_accessor_Fuse_Controls_Page_Title__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))App1_accessor_Fuse_Controls_Page_Title__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))App1_accessor_Fuse_Controls_Page_Title__SetAsObject_fn;
    return type;
}

// public generated App1_accessor_Fuse_Controls_Page_Title() :11
void App1_accessor_Fuse_Controls_Page_Title__ctor_1_fn(App1_accessor_Fuse_Controls_Page_Title* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :17
void App1_accessor_Fuse_Controls_Page_Title__GetAsObject_fn(App1_accessor_Fuse_Controls_Page_Title* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Page*>(obj, ::TYPES[0/*Fuse.Controls.Page*/]))->Title(), void();
}

// public override sealed Uno.UX.Selector get_Name() :14
void App1_accessor_Fuse_Controls_Page_Title__get_Name_fn(App1_accessor_Fuse_Controls_Page_Title* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = App1_accessor_Fuse_Controls_Page_Title::_name_, void();
}

// public generated App1_accessor_Fuse_Controls_Page_Title New() :11
void App1_accessor_Fuse_Controls_Page_Title__New1_fn(App1_accessor_Fuse_Controls_Page_Title** __retval)
{
    *__retval = App1_accessor_Fuse_Controls_Page_Title::New1();
}

// public override sealed Uno.Type get_PropertyType() :16
void App1_accessor_Fuse_Controls_Page_Title__get_PropertyType_fn(App1_accessor_Fuse_Controls_Page_Title* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :18
void App1_accessor_Fuse_Controls_Page_Title__SetAsObject_fn(App1_accessor_Fuse_Controls_Page_Title* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::Page*>(obj, ::TYPES[0/*Fuse.Controls.Page*/]))->Title(uCast<uString*>(v, ::TYPES[1/*string*/]));
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> App1_accessor_Fuse_Controls_Page_Title::Singleton_;
::g::Uno::UX::Selector App1_accessor_Fuse_Controls_Page_Title::_name_;

// public generated App1_accessor_Fuse_Controls_Page_Title() [instance] :11
void App1_accessor_Fuse_Controls_Page_Title::ctor_1()
{
    ctor_();
}

// public generated App1_accessor_Fuse_Controls_Page_Title New() [static] :11
App1_accessor_Fuse_Controls_Page_Title* App1_accessor_Fuse_Controls_Page_Title::New1()
{
    App1_accessor_Fuse_Controls_Page_Title* obj1 = (App1_accessor_Fuse_Controls_Page_Title*)uNew(App1_accessor_Fuse_Controls_Page_Title_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
