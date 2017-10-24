[Uno.Compiler.UxGenerated]
public partial class MyButton: Fuse.Controls.Panel
{
    string _field_mText;
    [global::Uno.UX.UXOriginSetter("SetmText")]
    public string mText
    {
        get { return _field_mText; }
        set { SetmText(value, null); }
    }
    public void SetmText(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_mText)
        {
            _field_mText = value;
            OnPropertyChanged("mText", origin);
        }
    }
    float4 _field_mColor;
    [global::Uno.UX.UXOriginSetter("SetmColor")]
    public float4 mColor
    {
        get { return _field_mColor; }
        set { SetmColor(value, null); }
    }
    public void SetmColor(float4 value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_mColor)
        {
            _field_mColor = value;
            OnPropertyChanged("mColor", origin);
        }
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<float4> temp_Color_inst;
    global::Uno.UX.Property<float4> temp1_Color_inst;
    internal global::Fuse.Controls.Rectangle rect;
    static MyButton()
    {
    }
    [global::Uno.UX.UXConstructor]
    public MyButton()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp2 = new global::Fuse.Reactive.Constant(this);
        var temp3 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new FuseSQLiteTest_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp4 = new global::Fuse.Reactive.Property(temp3, FuseSQLiteTest_accessor_MyButton_mText.Singleton);
        var temp5 = new global::Fuse.Reactive.Constant(this);
        temp_Color_inst = new FuseSQLiteTest_FuseControlsTextControl_Color_Property(temp, __selector1);
        var temp6 = new global::Fuse.Reactive.Property(temp5, FuseSQLiteTest_accessor_MyButton_mColor.Singleton);
        var temp1 = new global::Fuse.Drawing.Stroke();
        temp1_Color_inst = new FuseSQLiteTest_FuseDrawingStroke_Color_Property(temp1, __selector1);
        var temp7 = new global::Fuse.Reactive.Property(temp2, FuseSQLiteTest_accessor_MyButton_mColor.Singleton);
        rect = new global::Fuse.Controls.Rectangle();
        var temp8 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp4, Fuse.Reactive.BindingMode.Default);
        var temp9 = new global::Fuse.Reactive.DataBinding(temp_Color_inst, temp6, Fuse.Reactive.BindingMode.Default);
        var temp10 = new global::Fuse.Reactive.DataBinding(temp1_Color_inst, temp7, Fuse.Reactive.BindingMode.Default);
        var temp11 = new global::Fuse.Gestures.Clicked();
        var temp12 = new global::Fuse.Animations.Scale();
        rect.CornerRadius = float4(10f, 10f, 10f, 10f);
        rect.Width = new Uno.UX.Size(80f, Uno.UX.Unit.Unspecified);
        rect.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        rect.Name = __selector2;
        rect.Strokes.Add(temp1);
        rect.Children.Add(temp);
        rect.Bindings.Add(temp10);
        temp1.Width = 2f;
        temp.FontSize = 18f;
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Bindings.Add(temp8);
        temp.Bindings.Add(temp9);
        temp11.Animators.Add(temp12);
        temp12.Factor = 0.8f;
        temp12.Duration = 0.1;
        temp12.Target = rect;
        this.Children.Add(rect);
        this.Children.Add(temp11);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Color";
    static global::Uno.UX.Selector __selector2 = "rect";
}
