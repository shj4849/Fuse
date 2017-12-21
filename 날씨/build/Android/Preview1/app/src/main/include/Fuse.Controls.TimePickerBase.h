// This file was generated based on C:/Users/t2/AppData/Local/Fusetools/Packages/Fuse.Controls.TimePicker/1.4.0/TimePicker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.ITimePickerHost.h>
#include <Fuse.Controls.Panel.h>
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
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct TimePickerBase;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{struct DateTime;}}

namespace g{
namespace Fuse{
namespace Controls{

// public interfacemodifiers class TimePickerBase :28
// {
struct TimePickerBase_type : ::g::Fuse::Controls::Panel_type
{
    ::g::Fuse::Controls::ITimePickerHost interface18;
};

TimePickerBase_type* TimePickerBase_typeof();
void TimePickerBase__ctor_7_fn(TimePickerBase* __this);
void TimePickerBase__FuseControlsITimePickerHostOnValueChanged_fn(TimePickerBase* __this);
void TimePickerBase__get_Is24HourView_fn(TimePickerBase* __this, bool* __retval);
void TimePickerBase__set_Is24HourView_fn(TimePickerBase* __this, bool* value);
void TimePickerBase__OnIs24HourViewChanged_fn(TimePickerBase* __this, uObject* origin);
void TimePickerBase__OnRooted_fn(TimePickerBase* __this);
void TimePickerBase__OnUnrooted_fn(TimePickerBase* __this);
void TimePickerBase__OnValueChanged_fn(TimePickerBase* __this, uObject* origin);
void TimePickerBase__SetIs24HourView_fn(TimePickerBase* __this, bool* value, uObject* origin);
void TimePickerBase__SetValue_fn(TimePickerBase* __this, ::g::Uno::DateTime* value, uObject* origin);
void TimePickerBase__get_TimePickerView_fn(TimePickerBase* __this, uObject** __retval);
void TimePickerBase__get_Value_fn(TimePickerBase* __this, ::g::Uno::DateTime* __retval);
void TimePickerBase__set_Value_fn(TimePickerBase* __this, ::g::Uno::DateTime* value);

struct TimePickerBase : ::g::Fuse::Controls::Panel
{
    static ::g::Uno::UX::Selector _valueName_;
    static ::g::Uno::UX::Selector& _valueName() { return _valueName_; }
    static ::g::Uno::UX::Selector _is24HourViewName_;
    static ::g::Uno::UX::Selector& _is24HourViewName() { return _is24HourViewName_; }

    void ctor_7();
    bool Is24HourView();
    void Is24HourView(bool value);
    void OnIs24HourViewChanged(uObject* origin);
    void OnValueChanged(uObject* origin);
    void SetIs24HourView(bool value, uObject* origin);
    void SetValue(::g::Uno::DateTime value, uObject* origin);
    uObject* TimePickerView();
    ::g::Uno::DateTime Value();
    void Value(::g::Uno::DateTime value);
};
// }

}}} // ::g::Fuse::Controls
