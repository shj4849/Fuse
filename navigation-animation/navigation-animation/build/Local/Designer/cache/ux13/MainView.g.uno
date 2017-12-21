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
        global::Uno.UX.Property<Uno.UX.FileSource> temp_File_inst;
        global::Uno.UX.Property<Fuse.Visual> temp1_Target_inst;
        global::Uno.UX.Property<Uno.UX.Selector> __self_Name_inst;
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Card();
            var temp = new global::Fuse.Controls.Image();
            temp_File_inst = new navigationanimation_FuseControlsImage_File_Property(temp, __selector0);
            var temp2 = new global::Fuse.Reactive.Data("resource");
            var temp1 = new global::Fuse.Navigation.NavigateTo();
            temp1_Target_inst = new navigationanimation_FuseNavigationNavigateTo_Target_Property(temp1, __selector1);
            var temp3 = new global::Fuse.Reactive.Data("resource");
            __self_Name_inst = new navigationanimation_FuseNode_Name_Property(__self, __selector2);
            var temp4 = new global::Fuse.Reactive.Data("resource");
            var temp5 = new global::Fuse.Reactive.DataBinding(temp_File_inst, temp2, Fuse.Reactive.BindingMode.Default);
            var temp6 = new global::Fuse.Gestures.Clicked();
            var temp7 = new global::Fuse.Reactive.DataBinding(temp1_Target_inst, temp3, Fuse.Reactive.BindingMode.Default);
            var temp8 = new global::Fuse.Reactive.DataBinding(__self_Name_inst, temp4, Fuse.Reactive.BindingMode.Default);
            __self.CachingMode = Fuse.Elements.CachingMode.Never;
            temp.Bindings.Add(temp5);
            temp6.Actions.Add(temp1);
            temp6.Bindings.Add(temp7);
            __self.Children.Add(temp);
            __self.Children.Add(temp6);
            __self.Bindings.Add(temp8);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "File";
        static global::Uno.UX.Selector __selector1 = "Target";
        static global::Uno.UX.Selector __selector2 = "Name";
    }
    global::Uno.UX.Property<object> temp_Items_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
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
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Reactive.Each();
        temp_Items_inst = new navigationanimation_FuseReactiveEach_Items_Property(temp, __selector0);
        var temp18 = new global::Fuse.Reactive.Data("profiles");
        var temp19 = new global::Fuse.Controls.DockPanel();
        var temp20 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp21 = new global::Fuse.Controls.StatusBarBackground();
        var temp22 = new global::Fuse.Controls.Panel();
        var temp23 = new global::Fuse.Navigation.LinearNavigation();
        var temp24 = new global::Fuse.Motion.NavigationMotion();
        var temp25 = new global::Fuse.Navigation.SwipeNavigate();
        var resource = new Template(this, this);
        var temp26 = new global::Fuse.Reactive.DataBinding(temp_Items_inst, temp18, Fuse.Reactive.BindingMode.Default);
        var temp27 = new global::Fuse.Controls.BottomBarBackground();
        this.Background = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
        temp19.Children.Add(temp20);
        temp19.Children.Add(temp21);
        temp19.Children.Add(temp22);
        temp19.Children.Add(temp27);
        temp20.Code = "\n\t\t\tvar Observable = require(\"FuseJS/Observable\");\n\n\t\t\tvar profiles = Observable(\n\t\t\t\t{ resource : \"Assets/profile_1.png\" },\n\t\t\t\t{ resource : \"Assets/profile_2.png\" },\n\t\t\t\t{ resource : \"Assets/profile_3.png\" },\n\t\t\t\t{ resource : \"Assets/profile_6.png\" },\n\t\t\t\t{ resource : \"Assets/profile_4.png\" },\n\t\t\t\t{ resource : \"Assets/profile_5.png\" },\n\t\t\t\t{ resource : \"Assets/profile_2.png\" },\n\t\t\t\t{ resource : \"Assets/profile_5.png\" },\n\t\t\t\t{ resource : \"Assets/profile_4.png\" },\n\t\t\t\t{ resource : \"Assets/profile_1.png\" },\n\t\t\t\t{ resource : \"Assets/profile_7.png\" },\n\t\t\t\t{ resource : \"Assets/profile_3.png\" },\n\t\t\t\t{ resource : \"Assets/profile_2.png\" },\n\t\t\t\t{ resource : \"Assets/profile_5.png\" },\n\t\t\t\t{ resource : \"Assets/profile_4.png\" },\n\t\t\t\t{ resource : \"Assets/profile_1.png\" },\n\t\t\t\t{ resource : \"Assets/profile_7.png\" },\n\t\t\t\t{ resource : \"Assets/profile_3.png\" }\n\t\t\t);\n\n  \t\t\tmodule.exports = {\n  \t\t\t\tprofiles : profiles\n  \t\t\t}\n\t\t";
        temp20.LineNumber = 3;
        temp20.FileName = "MainView.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp21, Fuse.Layouts.Dock.Top);
        temp22.Margin = float4(0f, 100f, 0f, 100f);
        temp22.Children.Add(temp23);
        temp22.Children.Add(temp25);
        temp22.Children.Add(temp);
        temp23.Motion = temp24;
        temp24.GotoDuration = 0.4f;
        temp24.GotoEasing = Fuse.Animations.Easing.CircularOut;
        temp25.SwipeDirection = Fuse.Navigation.SwipeDirection.Left;
        temp.Templates.Add(resource);
        temp.Bindings.Add(temp26);
        global::Fuse.Controls.DockPanel.SetDock(temp27, Fuse.Layouts.Dock.Bottom);
        __g_nametable.This = this;
        this.Children.Add(temp19);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
}
