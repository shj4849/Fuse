[Uno.Compiler.UxGenerated]
public partial class MyLayoutMaster: Fuse.Controls.Panel
{
    global::Uno.UX.Property<Fuse.Elements.Element> rect_Element_LayoutMaster_inst;
    internal global::Fuse.Controls.Rectangle rect;
    internal global::Fuse.Controls.Rectangle lay1;
    internal global::Fuse.Controls.Rectangle lay2;
    internal global::Fuse.Controls.Rectangle lay3;
    internal global::Fuse.Controls.Rectangle lay4;
    static MyLayoutMaster()
    {
    }
    [global::Uno.UX.UXConstructor]
    public MyLayoutMaster()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        rect = new global::Fuse.Controls.Rectangle();
        rect_Element_LayoutMaster_inst = new App2_FuseElementsElement_ElementLayoutMaster_Property(rect, __selector0);
        var temp = new global::Fuse.Drawing.Stroke();
        var temp1 = new global::Fuse.Triggers.LayoutAnimation();
        var temp2 = new global::Fuse.Animations.Move();
        var temp3 = new global::Fuse.Animations.Scale();
        var temp4 = new global::Fuse.Controls.StackPanel();
        var temp5 = new global::Fuse.Controls.StackPanel();
        lay1 = new global::Fuse.Controls.Rectangle();
        var temp6 = new global::Fuse.Gestures.Clicked();
        var temp7 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Element>(rect_Element_LayoutMaster_inst);
        lay2 = new global::Fuse.Controls.Rectangle();
        var temp8 = new global::Fuse.Gestures.Clicked();
        var temp9 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Element>(rect_Element_LayoutMaster_inst);
        var temp10 = new global::Fuse.Controls.StackPanel();
        lay3 = new global::Fuse.Controls.Rectangle();
        var temp11 = new global::Fuse.Gestures.Clicked();
        var temp12 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Element>(rect_Element_LayoutMaster_inst);
        lay4 = new global::Fuse.Controls.Rectangle();
        var temp13 = new global::Fuse.Gestures.Clicked();
        var temp14 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Element>(rect_Element_LayoutMaster_inst);
        rect.Name = __selector1;
        global::Fuse.Controls.LayoutControl.SetLayoutMaster(rect, lay2);
        rect.Strokes.Add(temp);
        rect.Children.Add(temp1);
        temp.Color = float4(0.282353f, 0.05882353f, 0.3176471f, 1f);
        temp.Width = 5f;
        temp1.Animators.Add(temp2);
        temp1.Animators.Add(temp3);
        temp2.X = 1f;
        temp2.Y = 1f;
        temp2.Duration = 0.5;
        temp2.RelativeTo = Fuse.Triggers.LayoutTransition.PositionChange;
        temp2.Easing = Fuse.Animations.Easing.BackIn;
        temp3.X = 1f;
        temp3.Y = 1f;
        temp3.Duration = 0.5;
        temp3.RelativeTo = Fuse.Triggers.LayoutTransition.ScalingSizeChange;
        temp4.ItemSpacing = 15f;
        temp4.Alignment = Fuse.Elements.Alignment.Center;
        temp4.Children.Add(temp5);
        temp4.Children.Add(temp10);
        temp5.Orientation = Fuse.Layouts.Orientation.Horizontal;
        temp5.ItemSpacing = 15f;
        temp5.Children.Add(lay1);
        temp5.Children.Add(lay2);
        lay1.Color = float4(0.9843137f, 0.9333333f, 0f, 1f);
        lay1.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        lay1.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        lay1.Name = __selector2;
        lay1.Children.Add(temp6);
        temp6.Actions.Add(temp7);
        temp7.Value = lay1;
        lay2.Color = float4(0.9882353f, 0.003921569f, 0.003921569f, 1f);
        lay2.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        lay2.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        lay2.Name = __selector3;
        lay2.Children.Add(temp8);
        temp8.Actions.Add(temp9);
        temp9.Value = lay2;
        temp10.Orientation = Fuse.Layouts.Orientation.Horizontal;
        temp10.ItemSpacing = 15f;
        temp10.Children.Add(lay3);
        temp10.Children.Add(lay4);
        lay3.Color = float4(0f, 0.9843137f, 0.3764706f, 1f);
        lay3.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        lay3.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        lay3.Name = __selector4;
        lay3.Children.Add(temp11);
        temp11.Actions.Add(temp12);
        temp12.Value = lay3;
        lay4.Color = float4(0f, 0.2941177f, 0.9764706f, 1f);
        lay4.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        lay4.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        lay4.Name = __selector5;
        lay4.Children.Add(temp13);
        temp13.Actions.Add(temp14);
        temp14.Value = lay4;
        this.Children.Add(rect);
        this.Children.Add(temp4);
    }
    static global::Uno.UX.Selector __selector0 = "Element.LayoutMaster";
    static global::Uno.UX.Selector __selector1 = "rect";
    static global::Uno.UX.Selector __selector2 = "lay1";
    static global::Uno.UX.Selector __selector3 = "lay2";
    static global::Uno.UX.Selector __selector4 = "lay3";
    static global::Uno.UX.Selector __selector5 = "lay4";
}
