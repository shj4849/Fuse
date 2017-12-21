// This file was generated based on C:/Users/t2/Documents/Fuse/App1/build/Android/Preview/cache/ux13/PageWithTitle.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.App1_accessor_F-31feb0ff.h>
#include <_root.App1_accessor_P-25fbc2bb.h>
#include <_root.App1_accessor_P-80af078a.h>
#include <_root.App1_accessor_P-be35c5db.h>
#include <_root.App1_FuseContro-3273ceba.h>
#include <_root.App1_FuseContro-9ff1a965.h>
#include <_root.App1_FuseContro-d76d01b.h>
#include <_root.PageWithTitle.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.Trans-997c8373.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.DockLayout.h>
#include <Fuse.Layouts.Layout.h>
#include <Fuse.Navigation.While-89f5a828.h>
#include <Fuse.Navigation.WhileActive.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constan-264ec80.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[7];
static uType* TYPES[3];

namespace g{

// public partial sealed class PageWithTitle :2
// {
// static PageWithTitle() :53
static void PageWithTitle__cctor_4_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    PageWithTitle::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    PageWithTitle::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"TextColor"*/]);
    PageWithTitle::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Color"*/]);
    PageWithTitle::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"self"*/]);
}

static void PageWithTitle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("TextColor");
    ::STRINGS[2] = uString::Const("Color");
    ::STRINGS[3] = uString::Const("self");
    ::STRINGS[4] = uString::Const("HeaderColor");
    ::STRINGS[5] = uString::Const("HeaderTextColor");
    ::STRINGS[6] = uString::Const("Instructions");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    type->SetDependencies(
        ::g::App1_accessor_Fuse_Controls_Page_Title_typeof(),
        ::g::App1_accessor_PageWithTitle_HeaderColor_typeof(),
        ::g::App1_accessor_PageWithTitle_HeaderTextColor_typeof(),
        ::g::App1_accessor_PageWithTitle_Instructions_typeof(),
        ::g::Fuse::Controls::DockPanel_typeof(),
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::Uno::UX::Selector_typeof(),
        ::g::Fuse::TranslationModes_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17));
    type->SetFields(122,
        ::g::Uno::Float4_typeof(), offsetof(PageWithTitle, _field_HeaderColor), 0,
        ::g::Uno::Float4_typeof(), offsetof(PageWithTitle, _field_HeaderTextColor), 0,
        ::g::Uno::String_typeof(), offsetof(PageWithTitle, _field_Instructions), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(PageWithTitle, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(PageWithTitle, temp_TextColor_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(PageWithTitle, temp1_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(PageWithTitle, temp2_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&PageWithTitle::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&PageWithTitle::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&PageWithTitle::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&PageWithTitle::__selector3_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(10,
        new uFunction("get_HeaderColor", NULL, (void*)PageWithTitle__get_HeaderColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_HeaderColor", NULL, (void*)PageWithTitle__set_HeaderColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_HeaderTextColor", NULL, (void*)PageWithTitle__get_HeaderTextColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_HeaderTextColor", NULL, (void*)PageWithTitle__set_HeaderTextColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_Instructions", NULL, (void*)PageWithTitle__get_Instructions_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Instructions", NULL, (void*)PageWithTitle__set_Instructions_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)PageWithTitle__New5_fn, 0, true, type, 0),
        new uFunction("SetHeaderColor", NULL, (void*)PageWithTitle__SetHeaderColor_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetHeaderTextColor", NULL, (void*)PageWithTitle__SetHeaderTextColor_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetInstructions", NULL, (void*)PageWithTitle__SetInstructions_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()));
}

::g::Fuse::Controls::Panel_type* PageWithTitle_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 133;
    options.InterfaceCount = 18;
    options.DependencyCount = 8;
    options.ObjectSize = sizeof(PageWithTitle);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("PageWithTitle", options);
    type->fp_build_ = PageWithTitle_build;
    type->fp_ctor_ = (void*)PageWithTitle__New5_fn;
    type->fp_cctor_ = PageWithTitle__cctor_4_fn;
    type->interface17.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface17.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface17.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface12.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface14.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface13.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface16.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface15.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface15.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface15.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface15.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface9.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface10.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface10.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface11.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface10.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface8.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface10.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface10.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public PageWithTitle() :57
void PageWithTitle__ctor_8_fn(PageWithTitle* __this)
{
    __this->ctor_8();
}

// public float4 get_HeaderColor() :8
void PageWithTitle__get_HeaderColor_fn(PageWithTitle* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->HeaderColor();
}

// public void set_HeaderColor(float4 value) :9
void PageWithTitle__set_HeaderColor_fn(PageWithTitle* __this, ::g::Uno::Float4* value)
{
    __this->HeaderColor(*value);
}

// public float4 get_HeaderTextColor() :23
void PageWithTitle__get_HeaderTextColor_fn(PageWithTitle* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->HeaderTextColor();
}

// public void set_HeaderTextColor(float4 value) :24
void PageWithTitle__set_HeaderTextColor_fn(PageWithTitle* __this, ::g::Uno::Float4* value)
{
    __this->HeaderTextColor(*value);
}

// private void InitializeUX() :61
void PageWithTitle__InitializeUX_fn(PageWithTitle* __this)
{
    __this->InitializeUX();
}

// public string get_Instructions() :38
void PageWithTitle__get_Instructions_fn(PageWithTitle* __this, uString** __retval)
{
    *__retval = __this->Instructions();
}

// public void set_Instructions(string value) :39
void PageWithTitle__set_Instructions_fn(PageWithTitle* __this, uString* value)
{
    __this->Instructions(value);
}

// public PageWithTitle New() :57
void PageWithTitle__New5_fn(PageWithTitle** __retval)
{
    *__retval = PageWithTitle::New5();
}

// public void SetHeaderColor(float4 value, Uno.UX.IPropertyListener origin) :11
void PageWithTitle__SetHeaderColor_fn(PageWithTitle* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetHeaderColor(*value, origin);
}

// public void SetHeaderTextColor(float4 value, Uno.UX.IPropertyListener origin) :26
void PageWithTitle__SetHeaderTextColor_fn(PageWithTitle* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetHeaderTextColor(*value, origin);
}

// public void SetInstructions(string value, Uno.UX.IPropertyListener origin) :41
void PageWithTitle__SetInstructions_fn(PageWithTitle* __this, uString* value, uObject* origin)
{
    __this->SetInstructions(value, origin);
}

::g::Uno::UX::Selector PageWithTitle::__selector0_;
::g::Uno::UX::Selector PageWithTitle::__selector1_;
::g::Uno::UX::Selector PageWithTitle::__selector2_;
::g::Uno::UX::Selector PageWithTitle::__selector3_;

// public PageWithTitle() [instance] :57
void PageWithTitle::ctor_8()
{
    uStackFrame __("PageWithTitle", ".ctor()");
    ctor_7();
    InitializeUX();
}

// public float4 get_HeaderColor() [instance] :8
::g::Uno::Float4 PageWithTitle::HeaderColor()
{
    return _field_HeaderColor;
}

// public void set_HeaderColor(float4 value) [instance] :9
void PageWithTitle::HeaderColor(::g::Uno::Float4 value)
{
    uStackFrame __("PageWithTitle", "set_HeaderColor(float4)");
    SetHeaderColor(value, NULL);
}

// public float4 get_HeaderTextColor() [instance] :23
::g::Uno::Float4 PageWithTitle::HeaderTextColor()
{
    return _field_HeaderTextColor;
}

// public void set_HeaderTextColor(float4 value) [instance] :24
void PageWithTitle::HeaderTextColor(::g::Uno::Float4 value)
{
    uStackFrame __("PageWithTitle", "set_HeaderTextColor(float4)");
    SetHeaderTextColor(value, NULL);
}

// private void InitializeUX() [instance] :61
void PageWithTitle::InitializeUX()
{
    uStackFrame __("PageWithTitle", "InitializeUX()");
    ::g::Fuse::Reactive::Constant* temp3 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::App1_FuseControlsTextControl_Value_Property::New1(temp, PageWithTitle::__selector0_);
    ::g::Fuse::Reactive::Property* temp4 = ::g::Fuse::Reactive::Property::New1(temp3, ::g::App1_accessor_Fuse_Controls_Page_Title::Singleton_);
    ::g::Fuse::Reactive::Constant* temp5 = ::g::Fuse::Reactive::Constant::New1(this);
    temp_TextColor_inst = ::g::App1_FuseControlsTextControl_TextColor_Property::New1(temp, PageWithTitle::__selector1_);
    ::g::Fuse::Reactive::Property* temp6 = ::g::Fuse::Reactive::Property::New1(temp5, ::g::App1_accessor_PageWithTitle_HeaderTextColor::Singleton_);
    ::g::Fuse::Reactive::Constant* temp7 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Controls::Panel* temp1 = ::g::Fuse::Controls::Panel::New3();
    temp1_Color_inst = ::g::App1_FuseControlsPanel_Color_Property::New1(temp1, PageWithTitle::__selector2_);
    ::g::Fuse::Reactive::Property* temp8 = ::g::Fuse::Reactive::Property::New1(temp7, ::g::App1_accessor_PageWithTitle_HeaderColor::Singleton_);
    ::g::Fuse::Reactive::Constant* temp9 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    temp2_Value_inst = ::g::App1_FuseControlsTextControl_Value_Property::New1(temp2, PageWithTitle::__selector0_);
    ::g::Fuse::Reactive::Property* temp10 = ::g::Fuse::Reactive::Property::New1(temp9, ::g::App1_accessor_PageWithTitle_Instructions::Singleton_);
    ::g::Fuse::Layouts::DockLayout* temp11 = ::g::Fuse::Layouts::DockLayout::New2();
    ::g::Fuse::Controls::StackPanel* temp12 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp13 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp4, 3);
    ::g::Fuse::Reactive::DataBinding* temp14 = ::g::Fuse::Reactive::DataBinding::New1(temp_TextColor_inst, (uObject*)temp6, 3);
    ::g::Fuse::Reactive::DataBinding* temp15 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Color_inst, (uObject*)temp8, 3);
    ::g::Fuse::Controls::Panel* temp16 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Navigation::WhileActive* temp17 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Animations::Move* temp18 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Reactive::DataBinding* temp19 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp10, 3);
    HitTestMode(6);
    Name(PageWithTitle::__selector3_);
    ::g::Fuse::Controls::DockPanel::SetDock(temp12, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp1->Height(::g::Uno::UX::Size__New1(45.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp15);
    temp->FontSize(22.0f);
    temp->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp14);
    temp16->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.5333334f));
    temp16->Height(::g::Uno::UX::Size__New1(10.0f, 4));
    temp16->Alignment(12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp17->Threshold(0.4f);
    temp17->Invert(true);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp18);
    temp18->Y(1.0f);
    temp18->Duration(0.4);
    temp18->RelativeTo(::g::Fuse::TranslationModes::Size_);
    temp18->Easing(::g::Fuse::Animations::Easing::CircularInOut_);
    temp2->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp2->Alignment(10);
    temp2->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp19);
    Layout(temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
}

// public string get_Instructions() [instance] :38
uString* PageWithTitle::Instructions()
{
    return _field_Instructions;
}

// public void set_Instructions(string value) [instance] :39
void PageWithTitle::Instructions(uString* value)
{
    uStackFrame __("PageWithTitle", "set_Instructions(string)");
    SetInstructions(value, NULL);
}

// public void SetHeaderColor(float4 value, Uno.UX.IPropertyListener origin) [instance] :11
void PageWithTitle::SetHeaderColor(::g::Uno::Float4 value, uObject* origin)
{
    uStackFrame __("PageWithTitle", "SetHeaderColor(float4,Uno.UX.IPropertyListener)");

    if (::g::Uno::Float4__op_Inequality(value, _field_HeaderColor))
    {
        _field_HeaderColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"HeaderColor"*/]), origin);
    }
}

// public void SetHeaderTextColor(float4 value, Uno.UX.IPropertyListener origin) [instance] :26
void PageWithTitle::SetHeaderTextColor(::g::Uno::Float4 value, uObject* origin)
{
    uStackFrame __("PageWithTitle", "SetHeaderTextColor(float4,Uno.UX.IPropertyListener)");

    if (::g::Uno::Float4__op_Inequality(value, _field_HeaderTextColor))
    {
        _field_HeaderTextColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"HeaderTextC...*/]), origin);
    }
}

// public void SetInstructions(string value, Uno.UX.IPropertyListener origin) [instance] :41
void PageWithTitle::SetInstructions(uString* value, uObject* origin)
{
    uStackFrame __("PageWithTitle", "SetInstructions(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_Instructions))
    {
        _field_Instructions = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"Instructions"*/]), origin);
    }
}

// public PageWithTitle New() [static] :57
PageWithTitle* PageWithTitle::New5()
{
    PageWithTitle* obj1 = (PageWithTitle*)uNew(PageWithTitle_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
