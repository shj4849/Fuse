// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.-144a8301.h>
#include <Fuse.Controls.Native.-5999be91.h>
#include <Fuse.Controls.Native.-737f180b.h>
#include <Fuse.Controls.Native.-b47aa7c0.h>
#include <Fuse.Controls.Native.-bda9e869.h>
#include <Fuse.Controls.Native.-c20be635.h>
#include <Fuse.Visual.h>
#include <Uno.Double.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// C:\Users\t2\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.4.0\iOS\GraphicsView.uno
// --------------------------------------------------------------------------------------------

// public sealed extern class GraphicsView :7
// {
static void GraphicsView_build(uType* type)
{
}

uType* GraphicsView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(GraphicsView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.GraphicsView", options);
    type->fp_build_ = GraphicsView_build;
    return type;
}

// public GraphicsView(Fuse.Visual host) :10
void GraphicsView__ctor__fn(GraphicsView* __this, ::g::Fuse::Visual* host)
{
    __this->ctor_(host);
}

// public GraphicsView New(Fuse.Visual host) :10
void GraphicsView__New1_fn(::g::Fuse::Visual* host, GraphicsView** __retval)
{
    *__retval = GraphicsView::New1(host);
}

// public GraphicsView(Fuse.Visual host) [instance] :10
void GraphicsView::ctor_(::g::Fuse::Visual* host)
{
}

// public GraphicsView New(Fuse.Visual host) [static] :10
GraphicsView* GraphicsView::New1(::g::Fuse::Visual* host)
{
    GraphicsView* obj1 = (GraphicsView*)uNew(GraphicsView_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

// C:\Users\t2\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.4.0\iOS\ScrollView.uno
// ------------------------------------------------------------------------------------------

// public sealed extern class ScrollView :7
// {
static void ScrollView_build(uType* type)
{
}

uType* ScrollView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ScrollView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.ScrollView", options);
    type->fp_build_ = ScrollView_build;
    return type;
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) :10
void ScrollView__ctor__fn(ScrollView* __this, uObject* host)
{
    __this->ctor_(host);
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) :10
void ScrollView__New1_fn(uObject* host, ScrollView** __retval)
{
    *__retval = ScrollView::New1(host);
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) [instance] :10
void ScrollView::ctor_(uObject* host)
{
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) [static] :10
ScrollView* ScrollView::New1(uObject* host)
{
    ScrollView* obj1 = (ScrollView*)uNew(ScrollView_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

// C:\Users\t2\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.4.0\iOS\Slider.uno
// --------------------------------------------------------------------------------------

// public sealed extern class Slider :8
// {
static void Slider_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IRangeView_typeof(), offsetof(Slider_type, interface0));
}

Slider_type* Slider_typeof()
{
    static uSStrong<Slider_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Slider);
    options.TypeSize = sizeof(Slider_type);
    type = (Slider_type*)uClassType::New("Fuse.Controls.Native.iOS.Slider", options);
    type->fp_build_ = Slider_build;
    type->interface0.fp_set_Progress = (void(*)(uObject*, double*))Slider__set_Progress_fn;
    return type;
}

// public Slider(Fuse.Controls.Native.IRangeViewHost host, Fuse.Visual visual) :13
void Slider__ctor__fn(Slider* __this, uObject* host, ::g::Fuse::Visual* visual)
{
    __this->ctor_(host, visual);
}

// public Slider New(Fuse.Controls.Native.IRangeViewHost host, Fuse.Visual visual) :13
void Slider__New1_fn(uObject* host, ::g::Fuse::Visual* visual, Slider** __retval)
{
    *__retval = Slider::New1(host, visual);
}

// public void set_Progress(double value) :10
void Slider__set_Progress_fn(Slider* __this, double* value)
{
    __this->Progress(*value);
}

// public Slider(Fuse.Controls.Native.IRangeViewHost host, Fuse.Visual visual) [instance] :13
void Slider::ctor_(uObject* host, ::g::Fuse::Visual* visual)
{
}

// public void set_Progress(double value) [instance] :10
void Slider::Progress(double value)
{
}

// public Slider New(Fuse.Controls.Native.IRangeViewHost host, Fuse.Visual visual) [static] :13
Slider* Slider::New1(uObject* host, ::g::Fuse::Visual* visual)
{
    Slider* obj1 = (Slider*)uNew(Slider_typeof());
    obj1->ctor_(host, visual);
    return obj1;
}
// }

// C:\Users\t2\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.4.0\iOS\TextView.uno
// ----------------------------------------------------------------------------------------

// public sealed extern class TextView :6
// {
static void TextView_build(uType* type)
{
}

uType* TextView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(TextView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.TextView", options);
    type->fp_build_ = TextView_build;
    type->fp_ctor_ = (void*)TextView__New1_fn;
    return type;
}

// public generated TextView() :6
void TextView__ctor__fn(TextView* __this)
{
    __this->ctor_();
}

// public generated TextView New() :6
void TextView__New1_fn(TextView** __retval)
{
    *__retval = TextView::New1();
}

// public generated TextView() [instance] :6
void TextView::ctor_()
{
}

// public generated TextView New() [static] :6
TextView* TextView::New1()
{
    TextView* obj1 = (TextView*)uNew(TextView_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
