[Uno.Compiler.UxGenerated]
public partial class TextField: Fuse.Controls.Panel
{
    string _field_mValue;
    [global::Uno.UX.UXOriginSetter("SetmValue")]
    public string mValue
    {
        get { return _field_mValue; }
        set { SetmValue(value, null); }
    }
    public void SetmValue(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_mValue)
        {
            _field_mValue = value;
            OnPropertyChanged("mValue", origin);
        }
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    static TextField()
    {
    }
    [global::Uno.UX.UXConstructor]
    public TextField()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp1 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Controls.TextView();
        temp_Value_inst = new FuseSQLiteTest_FuseControlsTextInputControl_Value_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Property(temp1, FuseSQLiteTest_accessor_TextField_mValue.Singleton);
        var temp3 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
        var temp4 = new global::Fuse.Controls.Rectangle();
        var temp5 = new global::Fuse.Drawing.Stroke();
        temp.MaxLength = 20;
        temp.TextColor = Fuse.Drawing.Colors.Black;
        temp.Width = new Uno.UX.Size(90f, Uno.UX.Unit.Percent);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Bindings.Add(temp3);
        temp4.CornerRadius = float4(10f, 10f, 10f, 10f);
        temp4.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp4.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp4.Strokes.Add(temp5);
        temp5.Color = Fuse.Drawing.Colors.Black;
        temp5.Width = 2f;
        this.Children.Add(temp);
        this.Children.Add(temp4);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
