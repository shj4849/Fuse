[Uno.Compiler.UxGenerated]
public partial class SubPage: Fuse.Controls.Page
{
    readonly Fuse.Visual navBar;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "navBar"
    };
    static SubPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public SubPage(
		[global::Uno.UX.UXParameter("navBar")] Fuse.Visual navBar)
    {
        this.navBar = navBar;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new PagesList_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Data("title");
        var temp1 = new global::NavBarTitle();
        temp1_Value_inst = new PagesList_FuseControlsTextControl_Value_Property(temp1, __selector0);
        var temp3 = new global::Fuse.Reactive.Data("title");
        var temp4 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp5 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
        var temp6 = new global::Fuse.Controls.Panel();
        var temp7 = new global::Fuse.AlternateRoot();
        var temp8 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
        temp4.Code = "\n\t\texports.title = this.Parameter.map(function(param) {\n\t\t\treturn param.title;\n\t\t});\n\t";
        temp4.LineNumber = 2;
        temp4.FileName = "SubPage.ux";
        temp.FontSize = 50f;
        temp.TextColor = float4(0.2352941f, 0.2745098f, 0.3882353f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Bindings.Add(temp5);
        temp6.Children.Add(temp7);
        temp7.ParentNode = navBar;
        temp7.Node = temp1;
        temp1.Bindings.Add(temp8);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(navBar);
        this.Children.Add(temp4);
        this.Children.Add(temp);
        this.Children.Add(temp6);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
