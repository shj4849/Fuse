[Uno.Compiler.UxGenerated]
public partial class PageWithTitle: Fuse.Controls.Page
{
    float4 _field_HeaderColor;
    [global::Uno.UX.UXOriginSetter("SetHeaderColor")]
    public float4 HeaderColor
    {
        get { return _field_HeaderColor; }
        set { SetHeaderColor(value, null); }
    }
    public void SetHeaderColor(float4 value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_HeaderColor)
        {
            _field_HeaderColor = value;
            OnPropertyChanged("HeaderColor", origin);
        }
    }
    float4 _field_HeaderTextColor;
    [global::Uno.UX.UXOriginSetter("SetHeaderTextColor")]
    public float4 HeaderTextColor
    {
        get { return _field_HeaderTextColor; }
        set { SetHeaderTextColor(value, null); }
    }
    public void SetHeaderTextColor(float4 value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_HeaderTextColor)
        {
            _field_HeaderTextColor = value;
            OnPropertyChanged("HeaderTextColor", origin);
        }
    }
    string _field_Instructions;
    [global::Uno.UX.UXOriginSetter("SetInstructions")]
    public string Instructions
    {
        get { return _field_Instructions; }
        set { SetInstructions(value, null); }
    }
    public void SetInstructions(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Instructions)
        {
            _field_Instructions = value;
            OnPropertyChanged("Instructions", origin);
        }
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<float4> temp_TextColor_inst;
    global::Uno.UX.Property<float4> temp1_Color_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    static PageWithTitle()
    {
    }
    [global::Uno.UX.UXConstructor]
    public PageWithTitle()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp3 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new App1_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp4 = new global::Fuse.Reactive.Property(temp3, App1_accessor_Fuse_Controls_Page_Title.Singleton);
        var temp5 = new global::Fuse.Reactive.Constant(this);
        temp_TextColor_inst = new App1_FuseControlsTextControl_TextColor_Property(temp, __selector1);
        var temp6 = new global::Fuse.Reactive.Property(temp5, App1_accessor_PageWithTitle_HeaderTextColor.Singleton);
        var temp7 = new global::Fuse.Reactive.Constant(this);
        var temp1 = new global::Fuse.Controls.Panel();
        temp1_Color_inst = new App1_FuseControlsPanel_Color_Property(temp1, __selector2);
        var temp8 = new global::Fuse.Reactive.Property(temp7, App1_accessor_PageWithTitle_HeaderColor.Singleton);
        var temp9 = new global::Fuse.Reactive.Constant(this);
        var temp2 = new global::Fuse.Controls.Text();
        temp2_Value_inst = new App1_FuseControlsTextControl_Value_Property(temp2, __selector0);
        var temp10 = new global::Fuse.Reactive.Property(temp9, App1_accessor_PageWithTitle_Instructions.Singleton);
        var temp11 = new global::Fuse.Layouts.DockLayout();
        var temp12 = new global::Fuse.Controls.StackPanel();
        var temp13 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp4, Fuse.Reactive.BindingMode.Default);
        var temp14 = new global::Fuse.Reactive.DataBinding(temp_TextColor_inst, temp6, Fuse.Reactive.BindingMode.Default);
        var temp15 = new global::Fuse.Reactive.DataBinding(temp1_Color_inst, temp8, Fuse.Reactive.BindingMode.Default);
        var temp16 = new global::Fuse.Controls.Panel();
        var temp17 = new global::Fuse.Navigation.WhileActive();
        var temp18 = new global::Fuse.Animations.Move();
        var temp19 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp10, Fuse.Reactive.BindingMode.Default);
        this.HitTestMode = Fuse.Elements.HitTestMode.LocalBoundsAndChildren;
        this.Name = __selector3;
        global::Fuse.Controls.DockPanel.SetDock(temp12, Fuse.Layouts.Dock.Top);
        temp12.Children.Add(temp1);
        temp1.Height = new Uno.UX.Size(45f, Uno.UX.Unit.Unspecified);
        temp1.Children.Add(temp);
        temp1.Bindings.Add(temp15);
        temp.FontSize = 22f;
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Bindings.Add(temp13);
        temp.Bindings.Add(temp14);
        temp16.Color = float4(0f, 0f, 0f, 0.5333334f);
        temp16.Height = new Uno.UX.Size(10f, Uno.UX.Unit.Percent);
        temp16.Alignment = Fuse.Elements.Alignment.Bottom;
        temp16.Children.Add(temp17);
        temp16.Children.Add(temp2);
        temp17.Threshold = 0.4f;
        temp17.Invert = true;
        temp17.Animators.Add(temp18);
        temp18.Y = 1f;
        temp18.Duration = 0.4;
        temp18.RelativeTo = Fuse.TranslationModes.Size;
        temp18.Easing = Fuse.Animations.Easing.CircularInOut;
        temp2.TextColor = float4(1f, 1f, 1f, 1f);
        temp2.Alignment = Fuse.Elements.Alignment.Center;
        temp2.Margin = float4(20f, 20f, 20f, 20f);
        temp2.Bindings.Add(temp19);
        this.Layout = temp11;
        this.Children.Add(temp12);
        this.Children.Add(temp16);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "TextColor";
    static global::Uno.UX.Selector __selector2 = "Color";
    static global::Uno.UX.Selector __selector3 = "self";
}
