[Uno.Compiler.UxGenerated]
public partial class MainPage: Fuse.Controls.Page
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainPage __parent;
        [Uno.WeakReference] internal readonly MainPage __parentInstance;
        public Template(MainPage parent, MainPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> temp_Value_inst;
        global::Uno.UX.Property<string> temp1_Value_inst;
        internal global::Fuse.Reactive.EventBinding temp_eb1;
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.StackPanel();
            var temp = new global::Fuse.Controls.Text();
            temp_Value_inst = new NYTArticleSearch_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp2 = new global::Fuse.Reactive.Data("category");
            var temp1 = new global::Fuse.Controls.Text();
            temp1_Value_inst = new NYTArticleSearch_FuseControlsTextControl_Value_Property(temp1, __selector0);
            var temp3 = new global::Fuse.Reactive.Data("fcstValue");
            var temp4 = new global::Fuse.Reactive.Data("showRe");
            var temp5 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
            var temp6 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
            temp_eb1 = new global::Fuse.Reactive.EventBinding(temp4);
            __self.ItemSpacing = 10f;
            __self.Color = Fuse.Drawing.Colors.White;
            __self.Padding = float4(10f, 10f, 10f, 10f);
            global::Fuse.Gestures.Clicked.AddHandler(__self, temp_eb1.OnEvent);
            temp.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp.Bindings.Add(temp5);
            temp1.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp1.Bindings.Add(temp6);
            __self.Children.Add(temp);
            __self.Children.Add(temp1);
            __self.Bindings.Add(temp_eb1);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<object> temp1_Items_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb0;
    static MainPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public MainPage()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Controls.TextBox();
        temp_Value_inst = new NYTArticleSearch_FuseControlsTextInputControl_Value_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Data("searchTerm");
        var temp3 = new global::Fuse.Reactive.Data("ser");
        var temp1 = new global::Fuse.Reactive.Each();
        temp1_Items_inst = new NYTArticleSearch_FuseReactiveEach_Items_Property(temp1, __selector1);
        var temp4 = new global::Fuse.Reactive.Data("re");
        var temp5 = new global::Fuse.Controls.DockPanel();
        var temp6 = new global::Fuse.Controls.DockPanel();
        var temp7 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
        var temp8 = new global::Fuse.Controls.Button();
        temp_eb0 = new global::Fuse.Reactive.EventBinding(temp3);
        var temp9 = new global::Fuse.Controls.Panel();
        var temp10 = new global::Fuse.Controls.ScrollView();
        var temp11 = new global::Fuse.Controls.StackPanel();
        var temp12 = new Template(this, this);
        var temp13 = new global::Fuse.Reactive.DataBinding(temp1_Items_inst, temp4, Fuse.Reactive.BindingMode.Default);
        temp5.Margin = float4(10f, 10f, 10f, 10f);
        temp5.Children.Add(temp6);
        temp5.Children.Add(temp9);
        temp6.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        global::Fuse.Controls.DockPanel.SetDock(temp6, Fuse.Layouts.Dock.Top);
        temp6.Children.Add(temp);
        temp6.Children.Add(temp8);
        temp.Bindings.Add(temp7);
        temp8.Text = "Search";
        global::Fuse.Controls.DockPanel.SetDock(temp8, Fuse.Layouts.Dock.Right);
        global::Fuse.Gestures.Clicked.AddHandler(temp8, temp_eb0.OnEvent);
        temp8.Bindings.Add(temp_eb0);
        temp9.Children.Add(temp10);
        temp10.Children.Add(temp11);
        temp11.ItemSpacing = 10f;
        temp11.Children.Add(temp1);
        temp1.Templates.Add(temp12);
        temp1.Bindings.Add(temp13);
        this.Children.Add(temp5);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Items";
}
