[Uno.Compiler.UxGenerated]
public partial class ParallaxPage: Fuse.Controls.Page
{
    string _field_TitleText;
    [global::Uno.UX.UXOriginSetter("SetTitleText")]
    public string TitleText
    {
        get { return _field_TitleText; }
        set { SetTitleText(value, null); }
    }
    public void SetTitleText(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_TitleText)
        {
            _field_TitleText = value;
            OnPropertyChanged("TitleText", origin);
        }
    }
    float4 _field_ThemeColor;
    [global::Uno.UX.UXOriginSetter("SetThemeColor")]
    public float4 ThemeColor
    {
        get { return _field_ThemeColor; }
        set { SetThemeColor(value, null); }
    }
    public void SetThemeColor(float4 value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_ThemeColor)
        {
            _field_ThemeColor = value;
            OnPropertyChanged("ThemeColor", origin);
        }
    }
    Uno.UX.FileSource _field_ImageFile;
    [global::Uno.UX.UXOriginSetter("SetImageFile")]
    public Uno.UX.FileSource ImageFile
    {
        get { return _field_ImageFile; }
        set { SetImageFile(value, null); }
    }
    public void SetImageFile(Uno.UX.FileSource value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_ImageFile)
        {
            _field_ImageFile = value;
            OnPropertyChanged("ImageFile", origin);
        }
    }
    global::Uno.UX.Property<float4> contentShadow_Color_inst;
    global::Uno.UX.Property<float> temp_To_inst;
    global::Uno.UX.Property<Uno.UX.Size> temp1_Height_inst;
    global::Uno.UX.Property<string> title_Value_inst;
    global::Uno.UX.Property<float> swipeUpText_Opacity_inst;
    global::Uno.UX.Property<float4> temp2_Color_inst;
    global::Uno.UX.Property<Uno.UX.FileSource> temp3_File_inst;
    internal global::Fuse.Controls.ScrollView scrollView;
    internal global::Fuse.Controls.Shadow contentShadow;
    internal global::Fuse.Controls.Panel cover;
    internal global::Fuse.Controls.Text title;
    internal global::Fuse.Controls.Text swipeUpText;
    internal global::Fuse.Controls.Rectangle coverBackground;
    static ParallaxPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public ParallaxPage()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        contentShadow = new global::Fuse.Controls.Shadow();
        contentShadow_Color_inst = new ParallaxPages_FuseControlsShadow_Color_Property(contentShadow, __selector0);
        var temp4 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Triggers.ScrollingAnimation();
        temp_To_inst = new ParallaxPages_FuseTriggersScrollingAnimation_To_Property(temp, __selector1);
        var temp5 = new global::Fuse.Elements.HeightFunction(temp4);
        var temp6 = new global::Fuse.Reactive.Constant(this);
        var temp1 = new global::Fuse.Controls.Panel();
        temp1_Height_inst = new ParallaxPages_FuseElementsElement_Height_Property(temp1, __selector2);
        var temp7 = new global::Fuse.Elements.HeightFunction(temp6);
        var temp8 = new global::Fuse.Reactive.Constant(this);
        title = new global::Fuse.Controls.Text();
        title_Value_inst = new ParallaxPages_FuseControlsTextControl_Value_Property(title, __selector3);
        var temp9 = new global::Fuse.Reactive.Property(temp8, ParallaxPages_accessor_ParallaxPage_TitleText.Singleton);
        swipeUpText = new global::Fuse.Controls.Text();
        swipeUpText_Opacity_inst = new ParallaxPages_FuseElementsElement_Opacity_Property(swipeUpText, __selector4);
        var temp10 = new global::Fuse.Reactive.Constant(this);
        var temp2 = new global::Fuse.Drawing.GradientStop();
        temp2_Color_inst = new ParallaxPages_FuseDrawingGradientStop_Color_Property(temp2, __selector0);
        var temp11 = new global::Fuse.Reactive.Property(temp10, ParallaxPages_accessor_ParallaxPage_ThemeColor.Singleton);
        var temp12 = new global::Fuse.Reactive.Constant(this);
        var temp3 = new global::Fuse.Controls.Image();
        temp3_File_inst = new ParallaxPages_FuseControlsImage_File_Property(temp3, __selector5);
        var temp13 = new global::Fuse.Reactive.Property(temp12, ParallaxPages_accessor_ParallaxPage_ImageFile.Singleton);
        scrollView = new global::Fuse.Controls.ScrollView();
        var temp14 = new global::Fuse.Motion.ScrollViewMotion();
        var temp15 = new global::Fuse.Animations.Move();
        var temp16 = new global::Fuse.Animations.Move();
        var temp17 = new global::Fuse.Animations.Change<float4>(contentShadow_Color_inst);
        var temp18 = new global::Fuse.Reactive.DataBinding(temp_To_inst, temp5, Fuse.Reactive.BindingMode.Default);
        var temp19 = new global::Fuse.Controls.StackPanel();
        var temp20 = new global::Fuse.Reactive.DataBinding(temp1_Height_inst, temp7, Fuse.Reactive.BindingMode.Default);
        var temp21 = new global::Fuse.Controls.StackPanel();
        var temp22 = new global::LoremIpsum();
        cover = new global::Fuse.Controls.Panel();
        var temp23 = new global::Fuse.Navigation.EnteringAnimation();
        var temp24 = new global::Fuse.Animations.Move();
        var temp25 = new global::Fuse.Animations.Move();
        var temp26 = new global::Fuse.Animations.Move();
        var temp27 = new global::Fuse.Navigation.ExitingAnimation();
        var temp28 = new global::Fuse.Animations.Move();
        var temp29 = new global::Fuse.Animations.Move();
        var temp30 = new global::Fuse.Animations.Move();
        var temp31 = new global::Fuse.Reactive.DataBinding(title_Value_inst, temp9, Fuse.Reactive.BindingMode.Read);
        var temp32 = new global::Fuse.Triggers.WhileFalse();
        var temp33 = new global::Fuse.Animations.Cycle<float>(swipeUpText_Opacity_inst);
        coverBackground = new global::Fuse.Controls.Rectangle();
        var temp34 = new global::Fuse.Controls.Rectangle();
        var temp35 = new global::Fuse.Drawing.LinearGradient();
        var temp36 = new global::Fuse.Drawing.GradientStop();
        var temp37 = new global::Fuse.Reactive.DataBinding(temp2_Color_inst, temp11, Fuse.Reactive.BindingMode.Read);
        var temp38 = new global::Fuse.Effects.Desaturate();
        var temp39 = new global::Fuse.Reactive.DataBinding(temp3_File_inst, temp13, Fuse.Reactive.BindingMode.Read);
        scrollView.ClipToBounds = true;
        scrollView.Name = __selector6;
        scrollView.Motion = temp14;
        scrollView.Children.Add(temp);
        scrollView.Children.Add(temp19);
        temp14.Overflow = Fuse.Motion.OverflowType.Clamp;
        temp.From = 0f;
        temp.Animators.Add(temp15);
        temp.Animators.Add(temp16);
        temp.Animators.Add(temp17);
        temp.Bindings.Add(temp18);
        temp15.Y = -80f;
        temp15.Duration = 1;
        temp15.Target = coverBackground;
        temp16.Y = -120f;
        temp16.Duration = 1;
        temp16.Target = title;
        temp17.Value = float4(0f, 0f, 0f, 0.4666667f);
        temp17.Duration = 1;
        temp19.Children.Add(temp1);
        temp19.Children.Add(temp21);
        temp1.Bindings.Add(temp20);
        temp21.ItemSpacing = 10f;
        temp21.Color = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
        temp21.Margin = float4(-1f, 0f, -1f, 0f);
        temp21.Padding = float4(10f, 10f, 10f, 10f);
        temp21.Children.Add(contentShadow);
        temp21.Children.Add(temp22);
        contentShadow.Angle = -90f;
        contentShadow.Distance = 10f;
        contentShadow.Size = 20f;
        contentShadow.Color = float4(0f, 0f, 0f, 0f);
        contentShadow.Name = __selector7;
        temp22.Margin = float4(15f, 0f, 15f, 0f);
        cover.ClipToBounds = true;
        cover.Name = __selector8;
        cover.Children.Add(temp23);
        cover.Children.Add(temp27);
        cover.Children.Add(title);
        cover.Children.Add(swipeUpText);
        cover.Children.Add(temp32);
        cover.Children.Add(coverBackground);
        temp23.Animators.Add(temp24);
        temp23.Animators.Add(temp25);
        temp23.Animators.Add(temp26);
        temp24.X = -0.2f;
        temp24.RelativeTo = Fuse.TranslationModes.ParentSize;
        temp24.Target = title;
        temp25.X = 1f;
        temp25.RelativeTo = Fuse.TranslationModes.ParentSize;
        temp25.Target = swipeUpText;
        temp26.X = 0.4f;
        temp26.RelativeTo = Fuse.TranslationModes.ParentSize;
        temp26.Target = coverBackground;
        temp27.Animators.Add(temp28);
        temp27.Animators.Add(temp29);
        temp27.Animators.Add(temp30);
        temp28.X = 0.2f;
        temp28.RelativeTo = Fuse.TranslationModes.ParentSize;
        temp28.Target = title;
        temp29.X = -1f;
        temp29.RelativeTo = Fuse.TranslationModes.ParentSize;
        temp29.Target = swipeUpText;
        temp30.X = -0.4f;
        temp30.RelativeTo = Fuse.TranslationModes.ParentSize;
        temp30.Target = coverBackground;
        title.FontSize = 60f;
        title.Color = float4(1f, 1f, 1f, 1f);
        title.Alignment = Fuse.Elements.Alignment.Center;
        title.Name = __selector9;
        title.Font = global::MainView.RobotoThinItalic;
        title.Bindings.Add(temp31);
        swipeUpText.Value = "Swipe up to read";
        swipeUpText.Color = float4(1f, 1f, 1f, 1f);
        swipeUpText.Alignment = Fuse.Elements.Alignment.BottomCenter;
        swipeUpText.Margin = float4(0f, 0f, 0f, 25f);
        swipeUpText.Name = __selector10;
        temp32.Animators.Add(temp33);
        temp33.Low = 0.05f;
        temp33.High = 0.4f;
        temp33.Frequency = 0.4;
        temp33.Waveform = Fuse.Animations.CycleWaveform.Sine;
        coverBackground.Name = __selector11;
        coverBackground.Children.Add(temp34);
        coverBackground.Children.Add(temp3);
        temp34.Color = float4(0f, 0f, 0f, 0.1333333f);
        temp34.Fills.Add(temp35);
        temp34.Bindings.Add(temp37);
        temp35.AngleDegrees = 55f;
        temp35.Opacity = 0.8f;
        temp35.Stops.Add(temp36);
        temp35.Stops.Add(temp2);
        temp36.Offset = -0.2f;
        temp36.Color = float4(0f, 0f, 0f, 0f);
        temp2.Offset = 1.15f;
        temp3.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
        temp3.Layer = Fuse.Layer.Background;
        temp3.Children.Add(temp38);
        temp3.Bindings.Add(temp39);
        temp38.Amount = 0.4f;
        this.Children.Add(scrollView);
        this.Children.Add(cover);
    }
    static global::Uno.UX.Selector __selector0 = "Color";
    static global::Uno.UX.Selector __selector1 = "To";
    static global::Uno.UX.Selector __selector2 = "Height";
    static global::Uno.UX.Selector __selector3 = "Value";
    static global::Uno.UX.Selector __selector4 = "Opacity";
    static global::Uno.UX.Selector __selector5 = "File";
    static global::Uno.UX.Selector __selector6 = "scrollView";
    static global::Uno.UX.Selector __selector7 = "contentShadow";
    static global::Uno.UX.Selector __selector8 = "cover";
    static global::Uno.UX.Selector __selector9 = "title";
    static global::Uno.UX.Selector __selector10 = "swipeUpText";
    static global::Uno.UX.Selector __selector11 = "coverBackground";
}
