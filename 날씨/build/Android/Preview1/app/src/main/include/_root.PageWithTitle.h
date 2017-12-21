// This file was generated based on C:/Users/t2/Documents/Fuse/App1/build/Android/Preview1/cache/ux13/PageWithTitle.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct PageWithTitle;}

namespace g{

// public partial sealed class PageWithTitle :2
// {
::g::Fuse::Controls::Panel_type* PageWithTitle_typeof();
void PageWithTitle__ctor_8_fn(PageWithTitle* __this);
void PageWithTitle__get_HeaderColor_fn(PageWithTitle* __this, ::g::Uno::Float4* __retval);
void PageWithTitle__set_HeaderColor_fn(PageWithTitle* __this, ::g::Uno::Float4* value);
void PageWithTitle__get_HeaderTextColor_fn(PageWithTitle* __this, ::g::Uno::Float4* __retval);
void PageWithTitle__set_HeaderTextColor_fn(PageWithTitle* __this, ::g::Uno::Float4* value);
void PageWithTitle__InitializeUX_fn(PageWithTitle* __this);
void PageWithTitle__get_Instructions_fn(PageWithTitle* __this, uString** __retval);
void PageWithTitle__set_Instructions_fn(PageWithTitle* __this, uString* value);
void PageWithTitle__New5_fn(PageWithTitle** __retval);
void PageWithTitle__SetHeaderColor_fn(PageWithTitle* __this, ::g::Uno::Float4* value, uObject* origin);
void PageWithTitle__SetHeaderTextColor_fn(PageWithTitle* __this, ::g::Uno::Float4* value, uObject* origin);
void PageWithTitle__SetInstructions_fn(PageWithTitle* __this, uString* value, uObject* origin);

struct PageWithTitle : ::g::Fuse::Controls::Page
{
    ::g::Uno::Float4 _field_HeaderColor;
    ::g::Uno::Float4 _field_HeaderTextColor;
    uStrong<uString*> _field_Instructions;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_TextColor_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return PageWithTitle_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return PageWithTitle_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return PageWithTitle_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return PageWithTitle_typeof()->Init(), __selector3_; }

    void ctor_8();
    ::g::Uno::Float4 HeaderColor();
    void HeaderColor(::g::Uno::Float4 value);
    ::g::Uno::Float4 HeaderTextColor();
    void HeaderTextColor(::g::Uno::Float4 value);
    void InitializeUX();
    uString* Instructions();
    void Instructions(uString* value);
    void SetHeaderColor(::g::Uno::Float4 value, uObject* origin);
    void SetHeaderTextColor(::g::Uno::Float4 value, uObject* origin);
    void SetInstructions(uString* value, uObject* origin);
    static PageWithTitle* New5();
};
// }

} // ::g
