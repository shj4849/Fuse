[Uno.Compiler.UxGenerated]
public partial class MainView: Fuse.App
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template(MainView parent, MainView parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<float> __self_Opacity_inst;
        global::Uno.UX.Property<float4> __self_Color_inst;
        global::Uno.UX.Property<Uno.UX.Size> __self_Height_inst;
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Rectangle();
            __self_Opacity_inst = new App_FuseElementsElement_Opacity_Property(__self, __selector0);
            __self_Color_inst = new App_FuseControlsShape_Color_Property(__self, __selector1);
            var temp = new global::Fuse.Reactive.Data("color");
            __self_Height_inst = new App_FuseElementsElement_Height_Property(__self, __selector2);
            var temp1 = new global::Fuse.Reactive.Data("height");
            var temp2 = new global::Fuse.Triggers.AddingAnimation();
            var temp3 = new global::Fuse.Animations.Change<float>(__self_Opacity_inst);
            var temp4 = new global::Fuse.Reactive.DataBinding(__self_Color_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp5 = new global::Fuse.Reactive.DataBinding(__self_Height_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.CornerRadius = float4(5f, 5f, 5f, 5f);
            __self.Margin = float4(5f, 5f, 5f, 5f);
            __self.Name = __selector3;
            temp2.Animators.Add(temp3);
            temp3.Value = 0f;
            temp3.Duration = 0.3;
            __self.Children.Add(temp2);
            __self.Bindings.Add(temp4);
            __self.Bindings.Add(temp5);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Opacity";
        static global::Uno.UX.Selector __selector1 = "Color";
        static global::Uno.UX.Selector __selector2 = "Height";
        static global::Uno.UX.Selector __selector3 = "item";
    }
    global::Uno.UX.Property<float4> myRectangle_Color_inst;
    global::Uno.UX.Property<float4> myRectangle_CornerRadius_inst;
    global::Uno.UX.Property<object> temp_Items_inst;
    global::Uno.UX.Property<float> myBlur_Radius_inst;
    internal global::Fuse.Controls.Rectangle myRectangle;
    internal global::Fuse.Reactive.EventBinding temp_eb0;
    internal global::Fuse.Effects.Blur myBlur;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "myRectangle",
        "temp_eb0",
        "myBlur"
    };
    static MainView()
    {
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.Linear, "Linear");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticIn, "QuadraticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticOut, "QuadraticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticInOut, "QuadraticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicIn, "CubicIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicOut, "CubicOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicInOut, "CubicInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticIn, "QuarticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticOut, "QuarticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticInOut, "QuarticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticIn, "QuinticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticOut, "QuinticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticInOut, "QuinticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalIn, "SinusoidalIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalOut, "SinusoidalOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalInOut, "SinusoidalInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialIn, "ExponentialIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialOut, "ExponentialOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialInOut, "ExponentialInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularIn, "CircularIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularOut, "CircularOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularInOut, "CircularInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticIn, "ElasticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticOut, "ElasticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticInOut, "ElasticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackIn, "BackIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackOut, "BackOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackInOut, "BackInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceIn, "BounceIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceOut, "BounceOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceInOut, "BounceInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Transparent, "Transparent");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Transparent, "Transparent");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Black, "Black");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Black, "Black");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Silver, "Silver");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Silver, "Silver");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Gray, "Gray");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Gray, "Gray");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.White, "White");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.White, "White");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Maroon, "Maroon");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Maroon, "Maroon");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Red, "Red");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Red, "Red");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Purple, "Purple");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Purple, "Purple");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Fuchsia, "Fuchsia");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Fuchsia, "Fuchsia");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Green, "Green");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Green, "Green");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Lime, "Lime");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Lime, "Lime");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Olive, "Olive");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Olive, "Olive");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Yellow, "Yellow");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Yellow, "Yellow");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Navy, "Navy");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Navy, "Navy");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Blue, "Blue");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Blue, "Blue");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Teal, "Teal");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Teal, "Teal");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Aqua, "Aqua");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Aqua, "Aqua");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.TopLeft, "TopLeft");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.Center, "Center");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.Anchor, "Anchor");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.HorizontalBoxCenter, "HorizontalBoxCenter");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.VerticalBoxCenter, "VerticalBoxCenter");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.TransformOriginOffset, "TransformOriginOffset");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.PositionOffset, "PositionOffset");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.SizeFactor, "SizeFactor");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.Size, "Size");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Size, "Size");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.Actions.GiveFocus.Singleton, "GiveFocus");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.WhileKeyboardVisible.Keyboard, "Keyboard");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.PositionLayoutChange, "LayoutChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.SizeLayoutChange, "LayoutChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.WorldPositionChange, "WorldPositionChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.PositionChange, "PositionChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.ResizeSizeChange, "SizeChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.ScalingSizeChange, "SizeChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.Points, "Points");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.Pixels, "Pixels");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.ContentSize, "ContentSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.ScrollViewSize, "ScrollViewSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.PreloadRetain, "PreloadRetain");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.UnloadUnused, "UnloadUnused");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.QuickUnload, "QuickUnload");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.UnloadInBackgroundPolicy, "UnloadInBackground");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Thin, "Thin");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Light, "Light");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Regular, "Regular");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Medium, "Medium");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Bold, "Bold");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.ThinItalic, "ThinItalic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.LightItalic, "LightItalic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Italic, "Italic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.MediumItalic, "MediumItalic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.BoldItalic, "BoldItalic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.PlatformDefault, "PlatformDefault");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.ScalingModes.Identity, "Identity");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Local, "Local");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.ParentSize, "ParentSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Width, "Width");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Height, "Height");
    }
    [global::Uno.UX.UXConstructor]
    public MainView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp1 = new global::Fuse.Reactive.FuseJS.DiagnosticsImplModule();
        var temp2 = new global::Fuse.Reactive.FuseJS.Http();
        var temp3 = new global::Fuse.Reactive.FuseJS.TimerModule();
        var temp4 = new global::Fuse.Drawing.BrushConverter();
        var temp5 = new global::Fuse.Triggers.BusyTaskModule();
        var temp6 = new global::Fuse.Testing.UnoTestingHelper();
        var temp7 = new global::Fuse.FileSystem.FileSystemModule();
        var temp8 = new global::Fuse.Storage.StorageModule();
        var temp9 = new global::Fuse.WebSocket.WebSocketClientModule();
        var temp10 = new global::Polyfills.Window.WindowModule();
        var temp11 = new global::FuseJS.Globals();
        var temp12 = new global::FuseJS.Lifecycle();
        var temp13 = new global::FuseJS.Environment();
        var temp14 = new global::FuseJS.Base64();
        var temp15 = new global::FuseJS.Bundle();
        var temp16 = new global::FuseJS.FileReaderImpl();
        var temp17 = new global::FuseJS.UserEvents();
        myRectangle = new global::Fuse.Controls.Rectangle();
        myRectangle_Color_inst = new App_FuseControlsShape_Color_Property(myRectangle, __selector0);
        myRectangle_CornerRadius_inst = new App_FuseControlsRectangle_CornerRadius_Property(myRectangle, __selector1);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Reactive.Each();
        temp_Items_inst = new App_FuseReactiveEach_Items_Property(temp, __selector2);
        var temp18 = new global::Fuse.Reactive.Data("items");
        var temp19 = new global::Fuse.Reactive.Data("addItem");
        myBlur = new global::Fuse.Effects.Blur();
        myBlur_Radius_inst = new App_FuseEffectsBlur_Radius_Property(myBlur, __selector3);
        var temp20 = new global::Fuse.Controls.ClientPanel();
        var temp21 = new global::Fuse.Controls.PageControl();
        var temp22 = new global::PageWithTitle();
        var temp23 = new global::Fuse.Controls.Panel();
        var temp24 = new global::Fuse.Gestures.WhilePressed();
        var temp25 = new global::Fuse.Animations.Rotate();
        var temp26 = new global::Fuse.Animations.Scale();
        var temp27 = new global::Fuse.Animations.Change<float4>(myRectangle_Color_inst);
        var temp28 = new global::Fuse.Animations.Change<float4>(myRectangle_CornerRadius_inst);
        var temp29 = new global::PageWithTitle();
        var temp30 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp31 = new global::Fuse.Controls.Panel();
        var temp32 = new global::Fuse.Controls.ScrollView();
        var temp33 = new global::Fuse.Controls.Panel();
        var temp34 = new global::Fuse.Layouts.ColumnLayout();
        var item = new Template(this, this);
        var temp35 = new global::Fuse.Reactive.DataBinding(temp_Items_inst, temp18, Fuse.Reactive.BindingMode.Default);
        temp_eb0 = new global::Fuse.Reactive.EventBinding(temp19);
        var temp36 = new global::PageWithTitle();
        var temp37 = new global::Fuse.Controls.Grid();
        var temp38 = new global::Fuse.Controls.Image();
        var temp39 = new global::Fuse.Controls.Slider();
        var temp40 = new global::Fuse.Triggers.ProgressAnimation();
        var temp41 = new global::Fuse.Animations.Change<float>(myBlur_Radius_inst);
        temp20.Children.Add(temp21);
        temp21.Children.Add(temp22);
        temp21.Children.Add(temp29);
        temp21.Children.Add(temp36);
        temp22.Title = "Basic animation";
        temp22.Color = float4(0.9960784f, 0.9921569f, 0.9882353f, 1f);
        temp22.HeaderColor = float4(0.3490196f, 0.372549f, 1f, 1f);
        temp22.HeaderTextColor = float4(1f, 1f, 1f, 1f);
        temp22.Instructions = "Tap and hold the rectangle";
        temp22.Children.Add(temp23);
        temp23.Children.Add(myRectangle);
        myRectangle.CornerRadius = float4(0f, 0f, 0f, 0f);
        myRectangle.Color = float4(0.282353f, 0.5803922f, 0.8980392f, 1f);
        myRectangle.Width = new Uno.UX.Size(80f, Uno.UX.Unit.Unspecified);
        myRectangle.Height = new Uno.UX.Size(80f, Uno.UX.Unit.Unspecified);
        myRectangle.Name = __selector4;
        myRectangle.Children.Add(temp24);
        temp24.Animators.Add(temp25);
        temp24.Animators.Add(temp26);
        temp24.Animators.Add(temp27);
        temp24.Animators.Add(temp28);
        temp25.Degrees = 45f;
        temp25.Duration = 0.5;
        temp25.Easing = Fuse.Animations.Easing.CubicInOut;
        temp26.Factor = 2f;
        temp26.Duration = 0.5;
        temp26.Easing = Fuse.Animations.Easing.CubicInOut;
        temp27.Value = float4(0.9882353f, 0.3176471f, 0.5215687f, 1f);
        temp27.Duration = 0.3;
        temp28.Value = float4(15f, 15f, 15f, 15f);
        temp28.Duration = 0.3;
        temp29.Title = "Logic with JavaScript";
        temp29.Color = float4(1f, 1f, 1f, 1f);
        temp29.HeaderColor = float4(0.9647059f, 0.5607843f, 0.8431373f, 1f);
        temp29.HeaderTextColor = float4(1f, 1f, 1f, 1f);
        temp29.Instructions = "Tap the screen to add items";
        temp29.Children.Add(temp30);
        temp29.Children.Add(temp31);
        temp30.Code = "\n\t\t\t\t\tvar Observable = require('FuseJS/Observable');\n\t\t\t\t\titems = Observable();\n\t\t\t\t\tfunction addItem(){\n\t\t\t\t\t\titems.add({\n\t\t\t\t\t\t\tcolor : [Math.random(), Math.random(), Math.random(), 1],\n\t\t\t\t\t\t\theight : (Math.random() + 1.0) * 80\n\t\t\t\t\t\t});\n\t\t\t\t\t}\n\t\t\t\t\tmodule.exports = {\n\t\t\t\t\t\titems : items,\n\t\t\t\t\t\taddItem : addItem\n\t\t\t\t\t};\n\t\t\t\t";
        temp30.LineNumber = 37;
        temp30.FileName = "MainView.ux";
        global::Fuse.Gestures.Tapped.AddHandler(temp31, temp_eb0.OnEvent);
        temp31.Children.Add(temp32);
        temp31.Bindings.Add(temp_eb0);
        temp32.Children.Add(temp33);
        temp33.Layout = temp34;
        temp33.Children.Add(temp);
        temp34.ColumnCount = 3;
        temp.Templates.Add(item);
        temp.Bindings.Add(temp35);
        temp36.Title = "Realtime effects";
        temp36.Color = float4(1f, 1f, 1f, 1f);
        temp36.HeaderColor = float4(0.172549f, 0.682353f, 0.2470588f, 1f);
        temp36.HeaderTextColor = float4(1f, 1f, 1f, 1f);
        temp36.Instructions = "Use the slider to blur the logo";
        temp36.Children.Add(temp37);
        temp37.RowCount = 2;
        temp37.Children.Add(temp38);
        temp37.Children.Add(temp39);
        temp38.Color = float4(0f, 0f, 0f, 1f);
        temp38.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/FuseLogo.png"));
        temp38.Children.Add(myBlur);
        myBlur.Radius = 0f;
        myBlur.Name = __selector5;
        temp39.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp39.Margin = float4(40f, 0f, 40f, 0f);
        temp39.Children.Add(temp40);
        temp40.Animators.Add(temp41);
        temp41.Value = 10f;
        __g_nametable.This = this;
        __g_nametable.Objects.Add(myRectangle);
        __g_nametable.Objects.Add(temp_eb0);
        __g_nametable.Objects.Add(myBlur);
        this.Children.Add(temp20);
    }
    static global::Uno.UX.Selector __selector0 = "Color";
    static global::Uno.UX.Selector __selector1 = "CornerRadius";
    static global::Uno.UX.Selector __selector2 = "Items";
    static global::Uno.UX.Selector __selector3 = "Radius";
    static global::Uno.UX.Selector __selector4 = "myRectangle";
    static global::Uno.UX.Selector __selector5 = "myBlur";
}
